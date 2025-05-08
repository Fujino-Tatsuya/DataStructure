#include "CircleQueue.h"
#include <iostream>

CircleQueue::CircleQueue(int size)
{
	circlequeue = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

CircleQueue::~CircleQueue()
{
	delete[] circlequeue;
}

void CircleQueue::Enqueue(int input)
{
	if (isFull())
	{
		std::cout << "Enqueue Faild" << std::endl;
		return;
	}

	/*if (rear == capacity - 1)
	{
		rear = 0;
	}
	else
	{
		rear++;
	}*/
	rear = (rear + 1) % capacity;
	count++;
	circlequeue[rear] = input;
}

int CircleQueue::Dequeue()
{
	if (isEmpty())
	{
		std::cout << "Dequeue Faild" << std::endl;
		throw std::out_of_range("CircleQueue is empty for Dequeue");
	}

	int temp = circlequeue[front];

	/*if (front == capacity - 1)
	{
		front = 0;
	}
	else
	{
		front++;
	}*/
	front = (front + 1) % capacity;
	count--;

	return temp;
}

int CircleQueue::Peek()
{
	if (isEmpty())
	{
		throw std::out_of_range("CircleQueue is empty for Peek");
	}
	return circlequeue[front];
}

bool CircleQueue::isEmpty()
{
	return (count == 0);
}

bool CircleQueue::isFull()
{
	return (count == capacity);
}
