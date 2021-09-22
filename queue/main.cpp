// queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
	queue q;
	cout << "please enter your data to stop it enter a Negative number:\n";
	int x=-1;
	cin >> x;
	while(x>0 && !q.isFull())
	{
		q.push(x);
		cin >> x;
	}
	q.displayQueue();
	while (!q.isEmpty())
	{
		q.pop();
		q.displayQueue();
	}

	return 0;
}


