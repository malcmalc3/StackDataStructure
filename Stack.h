//Stack.h
//Declaration of Stack class structure
//Programmer: Malcolm Milton
//Date: 3/10/15

#ifndef STACK_H
#define STACK_H

template <class DataType>
struct StackNode
{
	DataType data; //data can be any type
	StackNode<DataType> *next; //Pointer to next node
};

template<class DataType>
class Stack
{
	private:
		StackNode<DataType> *top; //Pointer to the top node in the stack
		int maxSize; //Maximum stack size
		int numNodes; //Number of nodes in the stack
	public:
		Stack (int = 4); //Constructor: creates a stack with size x, default=10
		~Stack(); //Destructor
		bool isEmpty() const; //Checks if the stack is empty
		bool isFull() const; //Checks if the stack is full
		void push(const DataType); //Pushes a node onto the top of the stack
		void pop(); //Pops a node from the top of the stack
		DataType topStack() const; //Returns data from the top of the stack
};

#endif
