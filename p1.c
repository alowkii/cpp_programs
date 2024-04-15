/*
Find the maxmimun of 3 numbers without using if else or switch.

1<=numbers<=100000 , also all numbers may not be distinct

Note: if all numbers are same display all are equal

Sample Input :
5
6
7
Output:
7
*/

#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    return (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << max(n1, n2, n3);
    return 0;
}

