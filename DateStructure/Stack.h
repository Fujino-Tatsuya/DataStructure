#pragma once
class Stack
{
public:
	Stack(int size);
	~Stack();

	void Push(int value);
	int Pop();
	//void Pop();
	int Peek() const;
	bool isEmpty() const;
	bool isFull() const;
	int Count() const;

private:
	int top = -1;
	int capacity = 0;
	int* stack;
};


//����
//�� ������ ����? peek
//�� ������ ���ּ� pop
//�� ���� �־��ּ� push
//�����? isEmpty
//��á��? isFull
//� ����? Count


