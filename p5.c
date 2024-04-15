/*
Take an integer input and print 'YES' if the integer is a mars number, else print 'NO'.

Hint:
A mars number is a number if the sum of its digits can be reduced to single digit in even number of steps.
Example:
199 => 19 => 10 => 1
Number of steps = 3
Hence the number is not a mars number.

Input:
A single integer input
Output:
Print 'YES' if the number is a mars number, else print 'NO'

Example:
Input:
199
Output:
NO

Restriction: Make sure to follow the steps as described in the problem.
*/

#include<iostream>
using namespace std;

bool isMars(int x){
	int steps=0, res;
	if(x%10 == x){
		return true;
	}
	while(x>9){
		res=0;
		while(x!=0){
			res+=(x%10);
			x=(int)x/10;
		}
		x=res;
		steps++;
	}
	return (steps%2==0);
}

int main(){
	int x;
	cin>>x;
	if(isMars(x)) cout<<"\nYES";
	else cout<<"\nNO";
	return 0;
}
