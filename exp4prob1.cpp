#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void add()
{
	int r, x, y;

	cout << "Please enter the 2 numbers to be added: " << endl;
	cout << "First number: ";
	cin >> x;
	cout << "Second number: ";
	cin >> y;

	r = x + y;
	cout << "The sum is : " << r << endl << endl; 
} //Addition function of the program

void sub()
{
	int r, x, y;
	
	cout << "Please enter the 2 numbers to be subtracted: " << endl;
	cout << "First number: ";
	cin >> x;
	cout << "Second number: ";
	cin >> y;

	r = x - y;
	cout << "The difference is : " << r << endl << endl;
}

void mult()
{
	int r, x, y;
	
cout << "Please enter the 2 numbers to be multiplied: " << endl;
	cout << "First number: ";
	cin >> x;
	cout << "Second number: ";
	cin >> y;

	r = x * y;
	cout << "The product is : " << r << endl << endl;
}

void div ()
{
	int r, x, y;
	
cout << "Please enter the 2 numbers to be divided: " << endl;
	cout << "First number: ";
	cin >> x;
	cout << "Second number: ";
	cin >> y;

	r = x / y;
	cout << "The quotient is : " << r << endl << endl;
}

void mod ()
{
	int r, x, y;
	
cout << "Please enter the 2 numbers that will be used to find the remainder of the quotient: " << endl;
	cout << "First number: ";
	cin >> x;
	cout << "Second number: ";
	cin >> y;

	r = x % y;
	cout << "The remainder is : " << r << endl << endl;
}

void invalid ()
{
	cout << "invalid input!" << endl << endl;
}


int main ()
{
	bool abort = true;
	char cont, choice;
	do
	{
		cout << "MENU: " << endl;
		cout << "1. Add" << endl;
		cout << "2. Subtract" << endl;
		cout << "3. Multiply" << endl;
		cout << "4. Divide" << endl;
		cout << "5. Modulus" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
			case '1':
				{
					add();
				}
				break;
			case '2':
				{
					sub();
				}
				break;
			case '3':
				{
					mult();
				}
				break;
			case '4':
				{
					div();
				}
				break;
			case '5':
				{
					mod();
				}
				break;
			default:
				{
					cout << "Invalid input!" << endl;
				}
				break;
		}

		cout << "Do you want to continue? (Y/N) ";

		cin >> cont;

		switch (cont)
		{
			case 'y':
			case 'Y':
				{
					abort = false;
					cout << endl;
				}
				break;
			case 'n':
			case 'N':
				{
					abort = true;
					cout << endl;
				}
				break;
			default:
				{
					invalid();
				}
				break;
		}
	}

	while (!abort);

	_getch ();
	return 0;
}