// Find greatest of three numbers.

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int num3;
	
	cout << " Enter First number : ";
	cin >> num1;
	cout << " Enter Second number : ";
	cin >> num2;
	cout << " Enter Third number : ";
	cin >> num2;

	if ( num1 > num2 && num1 > num3 )

	{ 
		cout << num1 << " is greater than " << num2 << " and " << num3;

	}
  	
	if ( num2 > num1 && num2 > num3 )

	{ 
		cout << num2 << " is greater than " << num1 << " and " << num3;

	}
	else 

	{ 
		cout << num3 << " is greater than " << num2 << " and " << num1;

	}
}
