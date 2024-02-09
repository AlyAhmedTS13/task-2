/*
 * loops.cpp
 *
 *  Created on: Feb 9, 2024
 *      Author: alyah
 */

#include<iostream>
using namespace std;

int main() {

int cnt =0;
for( int a=1;a<=200;a++){
	for( int b=1;b<=200;b++){
		for( int c=1;c<=200;c++){
			for( int d=1;d<=200;d++){
				if((a+b)==(c+d))
					cnt+=1;
			}
		}
	}
}

cout<<cnt;
}


