//Stack.cpp
//Stak member function
//Programmer: Malcolm Milton
//Date: 3/10/15

#include "Stack.h"
#include <iostream>

template <class DataType> //Declares that this memeber is part of a templated class
Stack <DataType>::Stack(int x) //Constructor for a stack of type DataType (any type)
{
	maxSize = x; //Maximum number of nodes that can be in the stack
	numNodes = 0; //Initializes the size of the stack to empty
	top = NULL; //The stack is empty so there is nothing on top of the stack
}

template <class DataType>
Stack <DataType>::~Stack() //Destructor for Stack class
{
	while(top != NULL) //Stops when there are no more nodes in the stack
	{
		StackNode<DataType> *tempNode = top; //Sets a temporary pointer to the node on the top of the stack
		top = tempNode->next; //Moves the top of the stack pointer to the one below the node to remove
		delete tempNode; //Deletes the top node
	}
}

template <class DataType>
bool Stack<DataType>::isEmpty() const //Funtion that tells if there are no nodes in the stack
{
	return numNodes == 0 ? true : false; //Returns true if the stack is empty, false if other wise
}

template <class DataType>
bool Stack<DataType>::isFull() const //Function that tells if there is no more space in the stack
{ 
	return numNodes == maxSize ? true : false; //Returns true if the stack is full, false if other wise
}

template <class DataType>
void Stack<DataType>::push(const DataType x) //Function that puts a new information on top of the stack
{
	if(!isFull()) //Runs if there is space in the stack
	{
		StackNode<DataType> *tempNode = new StackNode<DataType>; //Makes a new pointer for pointing to a DataType
		tempNode->data = x; //Makes tempnode ppint to the DataType data of the parameter
		if(isEmpty()) //Runs if there are no nodes in the stack
			top = tempNode; //Puts the new information on the top of the stack
		else //Runs if there are already nodes in the stack
		{
			tempNode->next = top; //Makes tempNode point to the current top node
			top = tempNode; //Makes the new node the top node
		}
		numNodes++; //Increments the number of nodes in the stack
	}
	else //If there is no more space in the stack
	{
		cout << "The stack is full" << endl << endl;
	}
}

template <class DataType>
void Stack<DataType>::pop() //Function to take the top node off of the top of the list
{
	if(!isEmpty()) //Runs if there are nodes to take off the top
	{
		StackNode<DataType> *tempNode = top; //Makes a pointer for a DataType and points it to the top of the stack
		top = top->next; //Makes the second from the top into the top
		delete tempNode; //Deletes the node that was the top
		cout << "Top removed from stack" << endl << endl;
		numNodes--; //Decrements the number of nodes in the stack
	}
	else
		cout << "The stack is empty" << endl << endl;
}

template <class DataType>
DataType Stack<DataType>::topStack() const //Function to return data from the top of the stack
{
		return top->data; //Returns the DataType data portion of the StackNode
}
