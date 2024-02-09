/*
 * homeworkloops_2.cpp
 *
 *  Created on: Feb 9, 2024
 *      Author: alyah
 */

#include <iostream>
using namespace std;
int main() {




//problem2
	int n;
	cin>>n;
	int start=1;
	while(start<=n){
		  if(n%8==0||n%4==0&&n%3==0){
			  cout<<n<<" ";

		  }
		  n -=1;
	}

//problrm3
	int start=1;
	int count=1;
	int num;
	cin>>num;
	if(num>=1&&num<=30){

		while(start<=num){
			if(count%3==0&&count%4!=0){
				cout<<count<<" ";
				start+=1; }


			 count+=1;

		}


	}

// problem4
	int N;
		cin>>N;
		int start =1;
		while(start<=N){
			int x=1;
			while(x<=N-start){
			cout<<" ";
			x +=1;
			}
			x=1;
			while(x<=2*start-1){
				cout<<'*';
				x+=1;

			}

	cout<<"\n";
			start +=1;
		}

	 start=N;
	while(start>=1){

				int x=1;
				while(x<=N-start){
				cout<<" ";
				x +=1;
				}
				x=1;
				while(x<=2*start-1){
					cout<<'*';
					x+=1;
	}

				cout<<"\n";
						start -=1;

		}

}




