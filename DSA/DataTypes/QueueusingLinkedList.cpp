#include <bits/stdc++.h>
using namespace std;

struct QNode
{
	int data;
	QNode *next;
	QNode(int d)
	{
		data = d;
		next = NULL;
	}
};

struct Queue
{
	QNode *front, *rear;
	Queue() { front = rear = NULL; }

	void enQueue(int x)
	{

		QNode *temp = new QNode(x); // Create a new LL node

		if (rear == NULL)
		{ // If queue is empty, then new node is front and rear both
			front = rear = temp;
			return;
		}

		rear->next = temp; // Add the new node at the end of queue and change rear
		rear = temp;
	}

	void deQueue()
	{
		if (front == NULL)
			return;

		QNode *temp = front; // Store previous front and move front one node ahead
		front = front->next;

		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};

int main()
{
	Queue q;
	q.enQueue(10);
	q.enQueue(20);

	q.deQueue();
	q.deQueue();

	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);

	q.deQueue();

	cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1) << endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}
