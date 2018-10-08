//Students.h
//Declaration of the Student class
//Programmer: Malcolm Milton
//Date: 3/10/15

#ifndef STUDENTS_H
#define STUDENTS_H

struct Students
{
	char lastName[20]; //Student's last name
	char firstName[20]; //Student's first name
	int idNumber; //Student's ID number
	Students(); //Constructor
	void printStudent(); //Print a student's information
};

#endif
