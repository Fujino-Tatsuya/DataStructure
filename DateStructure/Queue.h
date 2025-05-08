#pragma once
class Queue
{
	Queue(int size);
	~Queue();

	void Enqueue(int input);
	int Dequeue();
	int Peek();
	bool isEmpty();
	bool isFull();
	
	int front = 0;
	int rear = -1;
	//front랑 rear 는 인덱스니까
	
	int capacity = 0; //최대크기
	int count = 0;     //현재크기
	int* queue = nullptr;
};

