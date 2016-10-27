// gosho ralta 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

/*
int main()

{
	int num;
	cout << "Input number = ";
	cin >> num;
	if (num >= 5 && num <= 20) {

		switch (num % 2) {

		case 0 : cout << "even" << endl;
			 break;

		case 1 : cout << "odd" << endl;
			 break;

		default: cout << "error" << endl; 
			 break;
				
		}
	}
	else
		cout << "error , input number between 5 and 20" << endl;
*/
	
/*
int main ()
{
	int num, a, b, c, proizvedenie;
	cout << "input 3 digit number = ";
	cin >> num;
	c = num % 10;
	b = (num % 100) / 10;
	a = num / 100;
	proizvedenie = (a * b * c);

	if (proizvedenie > 99 && proizvedenie <= 999) {
		cout << "JA! " << ((a * b * c) - (a + b + c)) <<endl;


	}
	else
		cout << "NEIN! " << a * b * c << endl;

*/

/*                                                     //???????????????????????????????????

int main ()
{
	int n, num;
	cout << "how many numbers? : ";
	cin >> n;

	for (int a = 0, low = 0; a < n; a++) {
		cout << "\nenter number " << a + 1  << ": ";
		cin >> num;
		(num > low && num < 0 ? low = num : 0 );
		cout << "\nfinal number : " << low << endl;
	}
	
	*/	

/*
int main()
{ 
	long long n;
	cout << " Input n to calculate n! : ";
	cin >> n;
	cout << "\nn! = "; 

	for (long long a = 1, fact=1; a <= n; a++) {	
		fact *= a;
		cout << fact << endl;

	}
*/

	system("pause");
    return 0;
}

