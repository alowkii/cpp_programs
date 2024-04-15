/*
Given a string S find the length of the longest substring of S with all distinct characters.

Input Format
First line of input contains S

Output Format
Output a single integer, the length of the longest substring of S with all distinct characters.

Example 1
Input

aab

Output

2

Example 2
Input

icpcprog

Output

5

Explanation:

Example 1: Longest substring with all distinct characters is ab.

Constraints:

1 <= |S| <= 100000
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	int len=str.length();
	vector<char> char_list;
	bool is_there;
	int k=0;
	
	while(k<len){
		is_there=false;
		for(int i=0; i<char_list.size(); i++){
			if(str[k] == char_list[i]){
				is_there=true;
				break;
			}
		}
		if(!is_there){
			char_list.push_back(str[k]);
		}
		k++;
	}
	
	cout<<char_list.size();
	return 0;
}
