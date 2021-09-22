#pragma once
#include<iostream>
#define maxSize 10
using namespace std;

class queue
{
private:
	int a[maxSize];
	int front;
	int rear;
public:
	queue();
	void push(int d);
	bool isFull();
	bool isEmpty();
	int pop();
	void displayQueue();
};

