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


//스택
//맨 위에거 뭐임? peek
//맨 위에거 빼주셈 pop
//맨 위에 넣어주셈 push
//비었음? isEmpty
//꽉찼음? isFull
//몇개 들어갔음? Count


