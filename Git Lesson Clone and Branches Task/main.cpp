#include "Person.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Person testPerson;

	cout << "Enter first name: ";
	getline(cin, testPerson.firstName);
	cout << "Enter last name: ";
	getline(cin, testPerson.lastName);
	cout << "Enter age: ";
	cin >> testPerson.age;
	cout << "Enter height (m): ";
	cin >> testPerson.height;
	cout << "Enter weight (kg): ";
	cin >> testPerson.weight;

	cout << "\n\nYour test person:" << endl;
	cout << "Full name: " << testPerson.firstName << " " << testPerson.lastName << endl;
	cout << "Age: " << testPerson.age << " y.o." << endl;
	cout << "Height: " << testPerson.height << " m" << endl;
	cout << "Weight: " << testPerson.weight << " kg" << endl;
}