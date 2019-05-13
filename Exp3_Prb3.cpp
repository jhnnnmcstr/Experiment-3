// Create a C++ program which prints the letters in a char array in reverse order and the 
// Ex: If the array contains{'e', 'n', 'g', '1', '9', '0', '7'} 
// the output (to the terminal) should be "0179egn".
// and shows the size of the array.

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstring>

using namespace std;

int main ()
{
	int n, i, j, temp;
	char arr [20];
	
	cout << "Enter any letter/number: " << endl;
	cin >> arr;
	
	n = 0;
	
	while (arr [n] != '\0')
	n++;
	
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr [i];
	}
	
	cout << "\nOutput size: "<< n << endl;
	
	getch();
	return 0;
}

