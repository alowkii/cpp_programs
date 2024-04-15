/*
Problem Statement
Title: Software Version Comparison

Description:
Given two software version strings, v1 and v2, determine their relationship. The versions are compared based on the numerical value of their segments, which are separated by periods. You need to decide whether v1 is the same as, an upgrade from, or a downgrade to v2.

Note: Dont use split(), if needed code for it.

Input:
- v1 (string): A version number consisting of numerical segments separated by periods.
- v2 (string): Another version number with the same format as v1.

Output:
- Return a string indicating the relationship:
- "same" if both versions are the same.
- "upgraded" if v1 is an upgrade from v2.
- "downgraded" if v1 is a downgrade to v2.

Constraints:
- The version strings will consist of numbers and period separators only.
- Each segment of the version number can be considered to fit within a standard integer value.

Function Signature:
def compare_versions(v1: str, v2: str) -> str:

Example
Input:
v1 = "12.34.56"
v2 = "12.34.57"

Output:
"downgraded"

Explanation:
Here, the third segment of v2 ("57") is higher than that of v1 ("56"), indicating that v1 is a downgrade relative to v2.

Additional Test Case
Input:
v1 = "12.34.56"
v2 = "12.000034.56"

Output:
"same"

Explanation:
Ignoring leading zeros, both version strings are equivalent as "12.34.56". Therefore, there is no upgrade or downgrade, and they are the same.

This problem involves parsing the version strings into comparable units, handling edge cases like leading zeros and different segment counts gracefully.
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> convert_to_array(string arr){
    arr+=".";
    int len = arr.length();
    vector<string> result;
    string s = "";
    for(int i = 0; i < len; i++){
        if(arr[i] == '.'){
            result.push_back(s);
            s = "";
        }
        else {
            s += arr[i];
        }
    }
    return result;
}

string compare_versions(string v1, string v2){
    vector<string> substr1_lst, substr2_lst;
    
    substr1_lst = convert_to_array(v1);
    substr2_lst = convert_to_array(v2);
    
    int len1 = substr1_lst.size(), len2 = substr2_lst.size();
    if(len1 != len2) return "";
    
    for(int i = 0; i < len1; i++){
        if(stoi(substr1_lst[i]) > stoi(substr2_lst[i])) return "upgraded";
        else if(stoi(substr1_lst[i]) < stoi(substr2_lst[i])) return "downgraded";
    }
    
    return "same";
}

int main(){
    string v1, v2;
    cin >> v1 >> v2;
    string result = compare_versions(v1, v2);
    cout << result;
    return 0;
}
