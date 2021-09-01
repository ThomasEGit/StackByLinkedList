#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack()
{
	size = 0;
	top = nullptr;
}

Stack::~Stack()
{
	Node* temp = top;
	while (temp != nullptr)
	{
		top = top->next;
		delete temp;
		temp = top;
	}
	size = 0;
	cout << "Destructor called" << endl;
}


bool Stack::isEmpty() const
{
	if (size == 0)
	{
		return true;
	}
	return false;
}

void Stack::push(int input)
{
	Node* newNode = new Node;
	newNode->nodeData = input;
	if (top == nullptr)
	{
		newNode->next = nullptr;
	}
	else
	{
		newNode->next = top;
	}
	top = newNode;
	size++;
}

void Stack::pop()
{
	if (top == nullptr)
	{
		cout << "Nothing to pop" << endl;
		return;
	}
	else if (top->next == nullptr)
	{
		delete top;
		top = nullptr;
	}
	else
	{
		Node* temp = top;
		temp = temp->next;
		delete top;
		top = temp;
	}
	size--;

}

int Stack::peak() const
{
	return top->nodeData;
}

void Stack::printStack()
{
	Node* temp = top;
	while (temp != nullptr)
	{
		cout << temp->nodeData << endl;
		temp = temp->next;
	}
}