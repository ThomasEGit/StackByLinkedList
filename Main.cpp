#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack testStack;

	testStack.push(1);
	testStack.push(6);
	testStack.printStack();
	cout << "--------------" << endl;
	testStack.pop();
	testStack.printStack();
	cout << "--------------" << endl;
	testStack.pop();
	testStack.printStack();
	cout << "--------------" << endl;
	testStack.pop();
	testStack.printStack();
	cout << "--------------" << endl;
	return 0;
}