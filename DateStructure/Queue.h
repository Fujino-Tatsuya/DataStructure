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
	//front�� rear �� �ε����ϱ�
	
	int capacity = 0; //�ִ�ũ��
	int count = 0;     //����ũ��
	int* queue = nullptr;
};

