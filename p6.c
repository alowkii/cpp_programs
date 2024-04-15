/*
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *
Design this layout

Restrictions: Dont use any inbuilt string functions to solve it.
*/

#include<iostream>
using namespace std;

int main(){
	int k;
	for(int i=1; i<6; i++){
		k=6-i;
		cout<<"\n";
		while(k>0){
			k--;
			cout<<" ";
		}
		k=(i*2)-1;
		while(k!=0){
			cout<<"*";
			k--;
		}
	}
	
	for(int i=4; i>0; i--){
		k=6-i;
		cout<<"\n";
		while(k>0){
			k--;
			cout<<" ";
		}
		k=(i*2)-1;
		while(k!=0){
			cout<<"*";
			k--;
		}
	}
	cout<<"\n ";
	return 0;
}
