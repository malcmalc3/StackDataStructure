//Lab4.cpp
//Testing of stack
//Programmer: Malcolm Milton
//Date: 3/10/15

#include "Students.h"
#include "Stack.h"
#include <iostream>
using namespace std;

//Function prototypes
int typeMenu(); //Function to let the user select to work with the Students stack or the integer stack
int stackMenu(); //Function to let the user choose what to do with the stack

int main()
{
	Stack<Students*> sstack; //Declares a Stack of DataType Students*
	Stack<int> istack; //Declares a stack of DataType int

	int choice = 0; //Variable for various selections by the user

	while(choice != 4) //Executes if the user does not want to quit
	{
		choice = typeMenu(); //Saves the option of 1 for Students* stack or 2 for int stack
		
		if(choice == 1) //If user wants to work with the Students* stack
		{
			choice = stackMenu(); //Saves the option for user to 1. push(), 2. pop(), 3. return information from the top of the stack, or 4. quit
			
			if(choice == 1) //If the user wants to push()
			{
				Students *newStudent = new Students(); //Creates a new student
				sstack.push(newStudent); //Calls the function to put the new student on top of the Students stack
			}
			else if(choice ==2) //If the user wants to take a student off the top of the stack
			{
				sstack.pop(); //Calls the function to take the top student off the top of the Students stack
			}
			else if(choice ==3) //If the user wants to print the information of the top student
			{
				if(!sstack.isEmpty()) //Runs if there are nodes in the stack
					sstack.topStack()->printStudent(); //Calls the function to return the DataType data portion of the StackNode and prints its information
				else //If there are no nodes in the stack
					cout << "The stack is empty" << endl << endl;
			}
			else if(choice ==4) //If the user wants to quit the program
				cout << "Thank you for using this program" << endl << endl;
		}
		else //If student wants to work with the int stack
		{
			choice = stackMenu(); //Saves the option for user to 1. push(), 2. pop(), 3. return information from the top of the stack, or 4. quit

                        if(choice == 1) //If the user wants to push()
                        {
                                cout << "Enter an interger to push(): ";
				cin >> choice; //Saves the user's choice of which integer to put of top of the stack
                                istack.push(choice); //Calls funtion to put the integer on top of the integer stack
				
				if(choice ==4) //The number 4 for this variable is used to quit the program, so changes it if the user put the number 4 in the stack
					choice = 1;
                        }
                        else if(choice ==2) //If the user wants to take a student off the top of the stack
                        {
                                istack.pop(); //Calls the function to take the integer off the top of the integer stack
                        }
                        else if(choice ==3) //If the user wants to print the information of the top student
                        {
				if(!istack.isEmpty()) //Runs if there are integers in the stack
                                	cout << istack.topStack() << endl << endl;
				else //If there are no nodes in the stack
					cout << "The stack is empty" << endl << endl;
                        }
                        else if(choice ==4) //If the user wants to quit the program
                                cout << "Thank you for using this program" << endl << endl;

		}
		
		
	}

	return 0;
}

int typeMenu() //Function to ask the user if they want to work witht the Students stack or the integer stack and returns the choice
{
	int choice; //Variable to save the user's choice

	cout << "Which would you like to access?" << endl << "1) Student stack" << endl 
	     << "2) Integer Stack" << endl << ": ";
	cin >> choice; //Saves the user's choice
	cout << endl;
	
	while(choice != 1 && choice != 2) //Loop to make sure the user chooses either 1 or 2
	{
		cout << "Please choose a valid choice: ";
		cin >> choice;
		cout << endl;
	}
	return choice; //Returns the user's choice
}

int stackMenu() //Function to ask the user what they want to do with the stack they chose
{
	int choice; //Variable to save the user's choice

        cout << "1) push()" << endl << "2) pop()" << endl << "3) topStack()" << endl 
	     << "4) Quit" << endl << ": ";
        cin >> choice; //Saves the user's choice
	cout << endl;

        while(choice < 1 || choice > 4) //Loop to make sure the user chooses an integer 1-4
        {
                cout << "Please choose a valid choice: ";
                cin >> choice;
                cout << endl;
        }
	return choice; //Returns the user's choice
}
