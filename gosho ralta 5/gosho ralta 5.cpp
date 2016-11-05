// gosho ralta 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
/*
 // zadacha 1

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
	
		// vtora zadacha e pravena predi

   // zadacha 3 

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


     // zadacha 4
                                                    //???????????????????????????????????
/*

int main ()
{
	int n, num;
	cout << "how many numbers? : ";
	cin >> n;
	int low = -n;

	for (int a = 0; a < n; a++) {
		cout << "\nenter number " << a + 1  << ": ";
		cin >> num;

		if (num > low && num < 0)
			low = num;

		
	}
	cout << "\nfinal number : " << low << endl;
	*/

  // zadacha 5

/* 
int main()
{ 
	int n;
	cout << " Input n to calculate n! : ";
	cin >> n;
	
	unsigned long long fact = 1;

	for (int a = 1; a <= n; a++) {	
		fact *= a;
		                                                       
	}
	cout << "\nn! = "; 
	cout << fact << endl; 
*/

   // zadacha 6

/* 
	int chlen = 0, broi; 
	cout << "Input n : ";
	cin >> broi;

	if (broi >= 0) {
		for (int i = 1; i <= broi; i++) {
			cout << "\na" << i << " = " << (i*i + 3 * i);

		}
		cout << endl;
	}
	else
		cout << "n must be 1 or more !" << endl;

*/

 // zadacha 7 

 /* 
	int n;
	cout << "Input how many rows : ";
	cin >> n;
	char x, y;
	cout << "\nInput symbol 1 : ";
	cin >> x;
	cout << "\nInput symbol 2 : ";
	cin >> y;


	if (n > 0) {
		for (int i = 1; i <= n; i++) {

			for (int j = 1; j <= i; j++) {
				cout << x;
			}

			for (int k = n; k >= i; k--) {
				cout << y;
			}

			cout << endl;
		}
		
	}
	else
		cout << "\nThe rows must be 1 or more !" << endl;
*/

  // zadacha 8 


/* 
	unsigned long long f1 = 0, f2 = 1, n, brat = 0, counter = 0;
	cout << "Input n : ";
	cin >> n;
	 
	if (n >= 1) {
		while (counter < n) {
			brat = f1;
			f1 = f2;
			f2 = brat + f2;
			counter++;
		}
	cout << f1 <<endl;
	} 

	else {
        cout << "error!";
	}


	*/	
	
    system("pause");
    return 0;
}

