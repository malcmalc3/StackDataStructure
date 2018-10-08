//Student.cpp
//Members of Student class
//Programmer: Malcolm Milton
//Date: 3/10/15

#include "Students.h"
#include <iostream>
using namespace std;

Students::Students() //Constructor for the Students class
{
	cout << "Please enter student's first name: ";
	cin >> firstName; //Saves the user input into the firstName variable of the Students class
	cout << "Please enter student's last name: ";
	cin >> lastName; //Saves the user input into the lastName variable of the Students class
	cout << "Plaese enter student's ID number: ";
	cin >> idNumber; //Saves the user input into the idNumber variable of the Students class
	cout << endl;
}

void Students::printStudent() //Function to print out the information of the Student
{
	cout << "ID# " << idNumber << " - " << lastName << ", " << firstName << endl << endl;
}
