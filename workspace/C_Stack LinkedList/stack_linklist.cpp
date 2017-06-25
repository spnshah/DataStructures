/*
 * stack_linklist.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: supen
 */

#include <iostream>
#include <cstdlib> // For using exit()
using namespace std;

class StackUnderFlowException
{
public:
	StackUnderFlowException()
	{
		cout << "Stack underflow." << endl;
	}
};

struct Node
{
	int data;
	struct Node *next;
};

class StackList
{
private:
	Node *stackTop;
	unsigned int count;

public:
	StackList()
	{
		stackTop = NULL;
		count = 0;
	}

	void push (int nodeElement)
	{
		Node *newNode = new Node();
		if (newNode == NULL)
		{
			cout << "Cannot allocate memory for a new Node." << endl;
			std::exit(1);
		}

		newNode->data = nodeElement;
		newNode->next = stackTop;
		count++;
		stackTop = newNode;
	}

	int pop()
	{
		if (stackTop == NULL)
		{
			throw new StackUnderFlowException();
		}

		int data = stackTop->data;
		Node *newTop = stackTop->next;
		delete stackTop;
		stackTop = newTop;
		count--;

		return data;
	}

	int size()
	{
		return count;
	}

	bool isEmpty()
	{
		return (stackTop == NULL);
	}
};

int main()
{
	StackList stack;
	cout << "Stack Linklist." << endl;

	try
	{
		if (stack.isEmpty())
		{
			cout << "Stack is empty." << endl;
		}

		stack.push(100);
		stack.push(200);

		cout << "Size of stack: " << stack.size() << endl;

		cout << stack.pop() << endl;
		cout << stack.pop() << endl;
		cout << stack.pop() << endl;
	}
	catch (...)
	{
		cout << "Some exception occurred." << endl;
	}
}
