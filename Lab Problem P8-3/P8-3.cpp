// File Name:     Lab Problem 8.3
// Author:        William Inkrott
// Date:          10/31/24
// Description:   Convert Roman Numerals to decimals based on the given formula.  

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int romanCharValue(char romanNumber);

int main(void)
{
	char romanNumber;
	string fullRomanNumber;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, fullRomanNumber);
		if (fullRomanNumber == "Q") break;
		for (int i = 0; i < fullRomanNumber.length(); i++)
		{
			romanNumber = fullRomanNumber[i];
			int recentValue = 0;
			recentValue = romanCharValue(romanNumber);
			cout << recentValue << endl;
		}
	}
	return 0;
}

int romanCharValue(char romanNumber)
{
	int romanValue = 0;
	if (romanNumber == 'M' or romanNumber == 'm')
	{
		romanValue = 1000;
	}
	if (romanNumber == 'D' or romanNumber == 'd')
	{
		romanValue = 500;
	}
	if (romanNumber == 'C' or romanNumber == 'c')
	{
		romanValue = 100;
	}
	if (romanNumber == 'L' or romanNumber == 'l')
	{
		romanValue = 50;
	}
	if (romanNumber == 'X' or romanNumber == 'x')
	{
		romanValue = 10;
	}
	if (romanNumber == 'V' or romanNumber == 'v')
	{
		romanValue = 5;
	}
	if (romanNumber == 'I' or romanNumber == 'i')
	{
		romanValue = 1;
	}
	return romanValue;
}