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

	int capacity = 0; //�ִ�ũ��
	int count = 0;     //����ũ��
	int* circlequeue = nullptr;
};

//����ť�� �׳� ť�� �ٸ���
//front�� rear �ε����� ��ȸ��

