#include "Person.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// TODO -> Insert your test code here
	Person myPerson;

	cout << "Enter person info:" << endl;
	cout << "First name: ";
	getline(cin, myPerson.firstName);
	cout << "Last name: ";
	getline(cin, myPerson.lastName);
	cout << "Age: ";
	cin >> myPerson.age;
	cout << "Height (m): ";
	cin >> myPerson.height;
	cout << "Weight (kg): ";
	cin >> myPerson.weight;

	cout << "Person " << myPerson.firstName << " " << myPerson.lastName << endl;
	cout << "Age: " << myPerson.age << " y.o." << endl;
	cout << "Height: " << myPerson.height << " m" << endl;
	cout << "Weight: " << myPerson.weight << " kg" << endl;
}