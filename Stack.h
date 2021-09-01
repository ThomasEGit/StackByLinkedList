#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

struct Node
{
	int nodeData;
	Node* next;
};

class Stack
{
private:
	int size;
	Node* top;
public:
	Stack();
	~Stack();
	bool isEmpty() const;
	void push(int input);
	void pop();
	int peak() const;
	void printStack();

};


#endif
