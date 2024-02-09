/*
 * selection_homework.cpp
 *
 *  Created on: Feb 5, 2024
 *      Author: alyah
 */





#include <iostream>
using namespace std;
int main() {

int a ,b;
cin>>a>>b;
if((a%2)!=0 && (b%2)!=0)
	cout<<a*b;
else if (a%2==0 && b%2==0)
	cout<<a/b;

else if ((a%2)!=0 && b%2==0)
	cout<<a+b;

else if (a%2==0 && (b%2)!=0)
	cout<<a-b;

// problem4
int x, num1, num2, num3, num4, num5;
	int sum = 0;

	cin >> x >> num1 >> num2 >> num3 >> num4 >> num5;
	if (num1 > x)
		sum += 1;
	if (num2 > x)
		sum += 1;
	if (num3 > x)
		sum += 1;
	if (num4 > x)
		sum += 1;
	if (num5 > x)
		sum += 1;
int sum2= 5-sum;

	cout << sum2 << " " << sum;



}
