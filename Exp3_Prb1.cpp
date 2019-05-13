// Create a C++ program to show the smallest and largest integer, the total, and the average of an array that take 10 elements only.

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	int a, b, n;
	int arr[10];
	float ave;
	float sum = 0;
	
	n = 10;
	
	cout << "Enter 10 elements: \n\n";
	
	for (int i = 0; i < n; i++)
	{
		cout << "Enter value " << i + 1 << " : ";
		cin >> arr [i]; 
	}

	a = arr[0];
	b = arr[0];
	
	for (int i = 0; i < n; i++)
	{
		if (a > arr [i])
		{
			a = arr [i];
		}
		else if (b < arr [i])
		{
			b = arr [i];
		}
		sum += arr [i];
	}
	
	ave = sum / 10;
	
	cout << "\n\nSmallest Integer: " << a << "\n";
	cout << "Largest Integer: " << b << "\n";
	cout << "Total: " << sum << "\n";
	cout << "Average Integer: " << ave << "\n";

	getch();
	return 0;
}
