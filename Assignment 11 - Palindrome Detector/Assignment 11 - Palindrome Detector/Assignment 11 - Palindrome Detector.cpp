// Assignment 11 - Palindrome Detector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Define funciton prototype
bool isPalindrome(string);

int main()
{
	// Declare int for size of test array.
	const int SIZE = 6;
	string test[SIZE] = 
	{ "ABLE WAS I ERE I SAW ELBA",
	"TIME TO MAKE THE F**KIN' CHIMICHANGAS!!",
	"GAH! RIGHT UP MAIN STREET!",
	"DESSERTS I STRESSED",
	"HIS NAME IS FRANCIS. HE GOT AJAX FROM THE DISH SOAP.",
	"KAYAK" };

	// Run the test.
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\"" << test[i] << "\"";
		if (isPalindrome(test[i]))
			cout << " is a palindrome.\n";
		else
			cout << " is NOT a palindrome.\n";
	}
	system("pause");
	return 0;
}

// Define isPalindrome recursive function. 
bool isPalindrome(string str)
{
	bool status = false;

	if (str.length() <= 1)
		status = true;
	else if (str.at(0) == str.at(str.length()-1))
		status = isPalindrome (str.substr(1, str.length()-2));

	return status;
}