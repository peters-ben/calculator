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
	cout << "X - Exit" << endl;
	cout << "Enter option here: ";
	cin >> option; // get chocie from user
	while (toupper(option) != 'X') {
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		switch (toupper(option)) {
		case 'A':
			cout << "Answer: " << add(num1, num2);
			break;
		case 'S':
			cout << "Answer: " << subtract(num1, num2);
			break;
		case 'M':
			cout << "Answer: " << multiply(num1, num2);
			break;
		case 'D':
			cout << "Answer: " << divide(num1, num2);
			break;
		default:
			cout << "Invalid operation! Try again!" << endl;
			break;
		}
		cout << "\nEnter option here: ";
		cin >> option;
	}
	cout << "Thanks for using the calculator!" << endl;
	system("pause");
}