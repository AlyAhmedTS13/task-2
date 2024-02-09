#include <iostream>
using namespace std;
int main() {

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

	if (num3<100)
		cout<<num3;
	else if (num2<100)
		cout<<num2;
	else if (num1<100)
			cout<<num1;
	else
		cout<<-1;



}


