#pragma once
class CircleQueue
{
	CircleQueue(int size);
	~CircleQueue();

	void Enqueue(int input);
	int Dequeue();
	int Peek();
	bool isEmpty();
	bool isFull();

	int front = 0;
	int rear = -1;

	int capacity = 0; //최대크기
	int count = 0;     //현재크기
	int* circlequeue = nullptr;
};

//원형큐랑 그냥 큐의 다른점
//front와 rear 인덱스가 순회함

