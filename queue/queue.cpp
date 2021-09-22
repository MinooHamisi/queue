#include "queue.h"
#include <iostream>
using namespace std;

queue::queue()
{
	front = -1;
	rear = -1;
}
//------------------------------------------
void queue::push(int d)
{
	if (!isFull())
	{
		if (this->front == -1)
			this->front += 1;
		this->rear += 1;
		this->a[this->rear] = d;
	}
	else if (isFull())
		cout << "the queue is full!\n";
}
//------------------------------------------
bool queue::isFull()
{
	if (this->rear == maxSize - 1 && this->front==0)
		return true;
	else
		return false;
}
//------------------------------------------
bool queue::isEmpty()
{
	if (this->front == -1)
		return true;
	else
		return false;
}
//------------------------------------------
int queue::pop()
{
	if (this->isEmpty())
	{
		cout << "the queue is empty!\n";
		return -1;
	}
	else
	{
		int x=this->a[this->front];
		this->front += 1;
		if (this->front > this->rear)
		{
			this->front = -1;
			this->rear = -1;
		}
		return x;
	}
}
//------------------------------------------
void queue::displayQueue()
{
	if (!this->isEmpty())
	{
		for (int i = this->front;i <= this->rear;i++)
			cout << this->a[i] << " ";
		cout << "\n";
	}
	else
	{
		cout << "the queue is empty!\n";
	}
}
//------------------------------------------
