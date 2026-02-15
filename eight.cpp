// Check if a year is leap year.

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << " Leap year checking calculator " << endl;

	cout << " Enter the Year : ";
	cin >> year;

	if ( year % 4 == 0 )
	{
		if ( year % 100 == 0 ) 
		{
			if ( year % 400  == 0) 
			{
				cout << year << " is a Leap year ";
			}
			else
			{
 				cout << year << " is not a Leap year ";
			}
		}
		else 
		{

			cout << year << " is a Leap year ";

		}
	}
	else
	{
		cout << year << " is not a Leap year";
	}

} 	