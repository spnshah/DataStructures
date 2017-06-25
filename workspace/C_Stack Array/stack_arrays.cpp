/*
 * stack_arrays.cpp
 *
 *  Created on: Mar 13, 2017
 *      Author: supen
 */


#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class StackOverFlowException
{
public:
	StackOverFlowException()
	{
		cout << "Stack overflow." << endl;
	}

};

class StackUnderFlowException
{
public:
	StackUnderFlowException()
	{
		cout << "Stack underflow." << endl;
	}
};

class ArrayStack
{
private:
	int data[MAX_SIZE];
	int top;

public:
	ArrayStack()
	{
		top = -1;
	}

	void push(int element)
	{
		if (top >= MAX_SIZE)
		{
			throw new StackOverFlowException();
		}
		//top++;
		data[++top] = element;
	}

	int pop()
	{
		if (top < 0)
		{
			throw new StackUnderFlowException();
		}
		return data[top--];
		//top--;
	}

	int size()
	{
		return top + 1;
	}

	bool isEmpty()
	{
		return (top == -1);
	}
};

int main()
{
	ArrayStack stack;
	cout << "Stack Array." << endl;

	try
	{
		if (stack.isEmpty())
		{
			cout << "Stack is empty. We can insert elements in to stack." << endl;

			stack.push(100);
			stack.push(200);

			cout << "Size of stack: " << stack.size() << endl;

			cout << stack.pop() << endl;
			cout << stack.pop() << endl;
			cout << stack.pop() << endl;
		}
	}
	catch (...)
	{
		cout << "Some exception occurred." << endl;
	}
}
