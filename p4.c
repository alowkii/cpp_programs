/*
For number from 1 to 100 if number is divisible by 3 print 'Hello' if divisible by 5 print 'World', if divisible by 15 print 'HelloWorld' else print the number itself

Input:
No input is required
Output:
100 lines of output, each line containing the string HelloWorld or Hello or World or the number itself according to the above rules.

Restriction: You cannot use %(modulus) in this problem.
*/

#include<iostream>
using namespace std;

int main(){
	for(int i=1; i<=100;i++){
		if((int)i/15 == (float)i/15) cout<<"\nHelloWorld";
		else{
			if((int)i/3 == (float)i/3) cout<<"\nHello";
			else{
				if((int)i/5 == (float)i/5) cout<<"\nWorld";
				else cout<<"\n"<<i;
			}
		}
	}
	return 0;
}
