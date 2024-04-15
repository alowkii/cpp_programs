/*
Take a number and return all the even digits of the number.

Constraints:
0 <= number <= 10000

Input:
A single integer is provided as input.
Output:
Return a list of even digits of the number, each digit in a new line.Return -1 in case there are no even digits

Example:
Input:
1204
Output:
2
0
4

Restriction: You cannot convert the number to string and solve it.
*/
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n!=0){
		if((n%10)%2==0)
			cout<<n%10<<"\n";
		n=(int)n/10;
	}
}
