#include "Queue.h"
#include <iostream>

Queue::Queue(int size)
{
	queue = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

Queue::~Queue()
{
	delete[] queue;
}

void Queue::Enqueue(int input)
{
	if (isFull())
	{
		std::cout << "Enqueue Faild" << std::endl;
		return;
	}

	rear++;
	count++;
	queue[rear] = input;
}

int Queue::Dequeue()
{
	if (isEmpty())
	{
		std::cout << "Dequeue Faild" << std::endl;
		throw std::out_of_range("Queue is empty for Dequeue");
	}

	int temp = queue[front];
	front++;
	count--;
	return temp;
}

int Queue::Peek()
{
	if (isEmpty())
	{
		throw std::out_of_range("queue is empty for Peek");
	}

	return queue[front];
}

bool Queue::isEmpty()
{
	return (count == 0);
}

bool Queue::isFull()
{
	return (rear == capacity - 1);
}