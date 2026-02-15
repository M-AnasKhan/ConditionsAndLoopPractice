// Find greater of two numbers.

#include <iostream>
using namespace std;
int main ()
{
	int num1;
	int num2;

	cout << " Enter First number : ";
	cin >> num1;
	cout << " Enter Second number : ";
	cin >> num2;
	
	if ( num1 > num2 ) 
	{
		cout << num1 <<" is greater then " << num2;
	}
	else
	{
		cout << num2 <<" is greater then " << num1;	
	}
}