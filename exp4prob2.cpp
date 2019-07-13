#include <iostream>
#include <conio.h>

using namespace std;

void sort(int x,int n);	//Function Prototype used by the sorting algorithm

int x, n, arr[50];

int main ()
{


	cout << "Input the number of integers to sort: " << flush;
	cin >> n;

	cout << "Input the integers: " << endl;

	for ( x= 0; x < n; x++)
	{
		cin >> arr[x];
	}
	//Asks for input to be used in sorting.

	sort(x,n);
	//Uses Bubble sorting algorithm to sort the integers input by the user.

	cout << "Now sorting in ascending order. " << endl;


	for (x = 0; x < n; x++)
	{
		cout << arr[x] << " ";
	}		//Outputs the sorted integers.

	_getch ();
	return 0;
}

void sort(int x,int n)
{
	int i, j, temp;

	for (i = n; i > 1;i--)
	{
		for (int j=0;j<i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}		//Bubble Sorting Code Block.