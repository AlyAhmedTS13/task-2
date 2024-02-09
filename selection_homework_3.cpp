/*
 * selection_homework_3.cpp
 *
 *  Created on: Feb 6, 2024
 *      Author: alyah
 */

#include <iostream>
using namespace std;
int main() {
//problem3
	 double num1, num2, num3;




cin >> num1 >> num2 >> num3;

	if (num1 > num2) {
	        double temp = num1;
	        num1 = num2;
	        num2 = temp;
	    }
	    if (num2 > num3) {
	        double temp = num2;
	        num2 = num3;
	        num3 = temp;
	    }
	    if (num1 > num2) {
	        double temp = num1;
	        num1 = num2;
	        num2 = temp;
	    }

cout<<num1<<" "<<num2<<" "<< num3;


}
