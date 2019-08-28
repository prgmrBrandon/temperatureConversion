#include <iostream>

using namespace std;

int main() 
{  
	// variable declaration section
	float fahrenheit;
	float celsius;
	char feedback = ' ';
	
	cout << "Fahrenheit to Celsius Temperature Converter (FCTC)" << endl;
	cout << "Enter a temperature in Fahrenheit: ";
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5.0 / 9.0;
	cout << "Temperature in Celsius: " << celsius << "." << endl;

	// Ask the user of the result seems to be correct
	cout << "Did FCTC meet your expectations? (Y/N) => ";
	cin >> feedback;
	
	if ((feedback == 'Y') || (feedback == 'y'))
	{
		cout << "Thank you!" << endl;
	}
	else
	{
	    cout << "Thank you for your feedback!";
	}

} 
