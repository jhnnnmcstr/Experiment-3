// Create a C++ Program that store temperature of Province A, Province B and Province C
// for a week (seven days) and display it

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

const int a = 3;
const int b = 7;
char prov;

int main ()
{
	cout << "Enter all temperature for a week of Province A, Province B, and then Province C.\n\n";
	
	int temp [a] [b];
	
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			if (i + 1 == 1)
			{
				cout << "Province A, Day " << j + 1 << " : ";
				cin >> temp [i] [j];
			}
			
			else if (i + 1 == 2)
			{
				cout << "Province B, Day " << j + 1 << " : ";
				cin >> temp [i] [j];
			}
			
			else if (i + 1 == 3)
			{
				cout << "Province C, Day " << j + 1 << " : ";
				cin >> temp [i] [j];
			}
		}
	}


	cout << "\n\nDisplaying Values:" << endl;
	
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			if (i + 1 == 1)
			{
				cout << "Province " << prov << ", Day " << j + 1 << " = " << temp [i] [j];
				cout << endl;	
			}
				
			else if (i + 1 == 2)
			{
				cout << "Province " << prov << ", Day " << j + 1 << " = " << temp [i] [j];
				cout << endl;
			}
				
			else if (i + 1 == 3)
			{
				cout << "Province " << prov << ", Day " << j + 1 << " = " << temp [i] [j];
				cout << endl;
			}
		}
	}
	
	getch();
	return 0;
}
