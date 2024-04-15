/*
Write a program that accepts 'n' integers from the user and prints the second highest number among them.

Input Format

1st line will take an integer input 'n' then 'n' integer numbers

Constraints

1<=numbers<=100000

Output Format

second biggest number

Sample Input 0

10
1
2
3
4
5
6
7
8
9
10
Sample Output 0

9
Sample Input 1

5
9
9
7
6
5
Sample Output 1

7
Sample Input 2

5
5
5
5
5
5
Sample Output 2

No second biggest number
Explanation 2

If all numbers are same like in this example then print No Second biggest number.

*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n], max_pos=0, res_pos;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		max_pos = arr[max_pos]<arr[i]?i:max_pos;
		res_pos = arr[res_pos]>arr[i]?i:res_pos;
	}
	
	for(int i=0;i<n;i++){
		res_pos = (arr[max_pos] != arr[i] && arr[res_pos] < arr[i])?i:res_pos;
	}
	
	if(res_pos==max_pos)
		cout<<"No second biggest number";
	else
		cout<<arr[res_pos];
}
