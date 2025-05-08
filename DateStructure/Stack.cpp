#include "Stack.h"
#include <iostream>

Stack::Stack(int size)
{
	stack = new int[size];
	capacity = size;
	top = -1;
}

Stack::~Stack()
{
	delete[] stack;
}

void Stack::Push(int value)
{
	if (isFull())
	{
		std::cout << "Push Failed" << std::endl;
		return;
	}

	top++;
	stack[top] = value;
}

int Stack::Pop()
{
	if (isEmpty())
	{
		throw std::out_of_range("Stack is empty for Pop");
	}

	int temp = stack[top];
	top--;
	return temp;
}

//void Stack::Pop()
//{
//	if (isEmpty())
//	{
//		throw std::out_of_range("Stack is empty for Pop");
//	}
//
//	top--;
//}

int Stack::Peek() const
{
	if (isEmpty())
	{
		throw std::out_of_range("Stack is empty for Peek");
	}

	return stack[top];
}

bool Stack::isEmpty() const
{
	return (top < 0);
}

bool Stack::isFull() const
{
	return top == capacity - 1;
}

int Stack::Count() const
{
	return top + 1;
}


