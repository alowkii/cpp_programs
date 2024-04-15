/*
Title: Minimum Character Changes to Make a String Palindrome

Description:
Given a string s, determine the minimum number of character substitutions needed to convert the string into a palindrome. A palindrome is a string that reads the same forward and backward.

Input:
A single string s which consists of lowercase English letters.

Output:
Return an integer representing the minimum number of character changes required to make the string a palindrome.

Constraints:
- 

Function Signature:
def min_changes_to_palindrome(s: str) -> int:

Example
Input:
s = "radar"

Output:
0

Explanation:
The string "radar" is already a palindrome, so no changes are needed.

Additional Test Case
Input:
s = "abca"

Output:
1

Explanation:
Changing the last character 'a' to 'b' would make the string "abba", which is a palindrome. Hence, only one change is necessary.
*/

#include<iostream>
#include<string>
using namespace std;

int min_changes_to_palindrome(string s){
	int len = s.length(), count=0;
	for(int i=0; i<(int)len/2; i++){
		if(s[i] != s[len-i-1]) count++;
	}
	return count;
}

int main(){
	string s;
	cin>>s;
	int result = min_changes_to_palindrome(s);
	cout<<result;
}
