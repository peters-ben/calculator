// Title: Calculator
// Description: A simple four-function calculator
// Author: Ben Peters
#include <iostream>
#include <string>
using namespace std;
double add(double num1, double num2) {
	return num1 + num2;
}
double subtract(double num1, double num2) {
	return num1 - num2;
}
double multiply(double num1, double num2) {
	return num1 * num2;
}
double divide(double num1, double num2) {
	if (num2 != 0)
		return num1 / num2;
	else
		return 0;
}


void main() {
	double num1, num2, answer; // input variables
	char option;
	cout << "+-------------------------+" << endl; // output logo
	cout << "+   Ultimate Calculator   +" << endl;
	cout << "+     By: Ben Peters      +" << endl;
	cout << "+-------------------------+" << endl << endl;
	cout << "Choose an operation" << endl << endl; // output choices
	cout << "A - Add      S - Subtract" << endl;
	cout << "M - Multiply D - Divide" << endl;
	cout << "P - Power    X - Exit" << endl;
	cout << "Enter option here: ";
	cin >> option; // get choice from user
	while (toupper(option) != 'X') {
		cout << "Enter first number: ";
		cin >> num1;
		if (toupper(option) == 'P')
			cout << "Enter power (decimal for roots): ";
		else 
			cout << "Enter second number: ";
		cin >> num2;
		switch (toupper(option)) {
		case 'A': // if user chooses A
			cout << "Answer: " << add(num1, num2);
			break;
		case 'S': // if user chooses S
			cout << "Answer: " << subtract(num1, num2);
			break;
		case 'M': // if user chooses M
			cout << "Answer: " << multiply(num1, num2);
			break;
		case 'D': // if user chooses D
			cout << "Answer: " << divide(num1, num2);
			break;
		case 'P': // if user chooses P
			cout << "Answer: " << pow(num1, num2);
			break;
		default: // if user enteres invalid choice
			cout << "Invalid operation! Try again!" << endl;
			break;
		}
		cout << "\nEnter option here: ";
		cin >> option;
	}
	cout << "Thanks for using the calculator!" << endl;
	system("pause");
}