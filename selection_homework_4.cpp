/*
 * selection_homework_3.cpp
 *
 *  Created on: Feb 7, 2024
 *      Author: alyah
 */


#include <iostream>
using namespace std;
int main() {

//problem1 medium
int num,result;
cin>>num;
result=num;
cin>>num;
if(result<num)
	result=num;
cin>>num;
if(result<num)
	result=num;
cin>>num;
if(result<num)
	result=num;
cin>>num;
if(result<num)
	result=num;
cin>>num;
if(result<num)
	result=num;
cin>>num;
if(result<num)
	result=num;
cin>>num;
if(result<num)
	result=num;
cin>>num;
if(result<num)
	result=num;
cin>>num;
if(result<num)
	result=num;
cout<<result;


//problem2 medium
int n,
result1=0;
cin>>n;

if(n>=2&&n<=10) {
	int num1;
	cin>>num1;
	result1=num1;

     	result1=num1;
}

if(n>=2&&n<=10) {
	int num2;
     	cin>>num2;
     	n-=1;
     	if(result1<num2)
     		result1=num2;

}
if(n>=2&&n<=10) {
	int num3;
     	cin>>num3;
     	n-=1;
     	if(result1<num3)
     		result1=num3;

}

if(n>=2&&n<=10) {
	int num4;
     	cin>>num4;

     	n-=1;
     	if(result1<num4)
     		result1=num4;

}

if(n>=2&&n<=10) {
	int num5;
     	cin>>num5;

     	n-=1;
     	if(result1<num5)
     		result1=num5;


}
if(n>=2&&n<=10) {
	int num6;
     	cin>>num6;

     	n-=1;
     	if(result1<num6)
     		result1=num6;

}

if(n>=2&&n<=10) {
	int num7;
     	cin>>num7;

     	n-=1;
     	if(result1<num7)
     		result1=num7;

}
if(n>=2&&n<=10) {
	int num8;
     	cin>>num8;

     	n-=1;
     	if(result1<num8)
     		result1=num8;

}


if(n>=2&&n<=10) {
	int num9;
     	cin>>num9;

     	n-=1;
     	if(result1<num9)
     		result1=num9;

}


if(n>10)
	cout<<"nothing";
else if (result1==0)

	cout<<"nothing";

else

	cout<<result1;

}

