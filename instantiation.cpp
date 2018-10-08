//instantiation.cpp
//File to link the templated .cpp files
//Programmer: Malcolm Milton
//Date: 3/10/15

#include "Students.cpp"
#include "Lab4.cpp"
#include "Stack.cpp"

template class Stack<Students*>;
template class StackNode<Students*>;

template class Stack<int>;
template class StackNode<int>;
