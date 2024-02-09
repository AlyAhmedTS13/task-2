/*
 * homework_loops.cpp
 *
 *  Created on: Feb 9, 2024
 *      Author: alyah
 */
#include <iostream>
using namespace std;
int main() {
//problem1
	int x,y;
cin>>x>>y;
int start =1;
int sum =x;
while (x>=start||start<=y){

 cout<<sum<<endl;
 sum = sum+1;
 start = start+1;
if(sum>y)
	break;

}


//problem2

int n;
cin>>n;
char c;
cin>>c;
int start =1;
while(start<n){
	cout<<c;
	start -=1;
}


// problem3

int N;
cin>>N;
int start =1;
while(start<=N){
	int x=1;
	while(x<=start){
	cout<<'*';
	x +=1;
	}
	cout<<"\n";
	start +=1;
}





}

