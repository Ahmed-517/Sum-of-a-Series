#include <iostream>

using namespace std;

// Define the factorial function
int factorial(int fact);

// The Main Function
int main() {

	/* 
		Program Title
		Skip This
	*/
	cout << /* The same Tabs */
		   "\t\t\t\t" << "*************************************\n"
		<< "\t\t\t\t" << "*   Program to calculate            *\n"
		<< "\t\t\t\t" << "*   The Sum of The Series           *\n"
		<< "\t\t\t\t" << "*   1+(x/1!)+(x^2/2!)+...+(x^n/n!)  *\n"
		<< "\t\t\t\t" << "*************************************\n" << endl;

	/*
		Define & Get
		the two variables
			(x, n)
	*/
	int x, n;
	cout << "\t\t\t\t\t Enter the value of" << endl;
	cout << "\t\t\t\t\t\t x: "; cin >> x;
	cout << "\t\t\t\t\t\t n: "; cin >> n;
	cout << "\t\t\t\t------------------------------------" << endl;

	float sum = 0;

	int i;
	for (i=0; i <= n; i++) {
		sum = sum + ( pow(x, i) / factorial(i) );
	}

	/*
	* For Test
	* Only
	cout << "The factorial of (i) is " << factorial(i) << endl;
	cout << x << " power " << n << " equals " << pow(x, n) << endl;
	*/

	cout << "\t\t\t\tThe Sum of the Series" << endl;
	cout << "\t\t\t\t1";
	for (i = 1; i <= n; i++) {
		cout << "+(" << x << "^" << i << "/" << i << "!" << ")";
	}
	cout << "=" << sum << endl;
	cout << "\t\t\t\t --> equal " << sum << endl;
	cout << "\t\t\t\t------------------------------------" << endl;

	// Start Function Again
	char start;
	cout << "\t\t\t\tEnter Y to Start The Function Again\n\t\t\t\tAny Thing Else To Exit\n\t\t\t\t\t--> ";
	cin >> start;
	if (start == 'Y' || start == 'y')
		main();
}

// Decleration the factorial fanction
int factorial(int fact) {
	
	int mult = 1;
	for (int i = 1; i <= fact; i++) {
		mult *= i;
	}
	return mult;
}