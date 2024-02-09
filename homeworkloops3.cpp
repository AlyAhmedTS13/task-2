/*
 * homeworkloops3.cpp
 *
 *  Created on: Feb 9, 2024
 *      Author: alyah
 */
#include<iostream>
using namespace std;

int main() {
    int count = 0;
int x,y;
cin>>x>>y;

    if (x >= 50 && x <= 300 && y>=70&&y<=400) {
        for (int j = 0; j <=y; j++) {
        	for (int i = 0; i <=x; i++){
        		 if (i < j && (i + j) % 7 == 0)
        		                count += 1;
        		        }
        	}

        }
    cout << count;
       return 0;
    }



