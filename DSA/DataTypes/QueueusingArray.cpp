#include <bits/stdc++.h>
using namespace std;

struct Queue {
	int front, rear, capacity;
	int* queue;
	Queue(int c)
	{
		front = rear = 0;
		capacity = c;
		queue = new int;
	}

	~Queue() { delete[] queue; }

	void queueEnqueue(int data) // function to insert an element at the rear of the queue
	{
		if (capacity == rear) {
			printf("\nQueue is full\n");
			return;
		}
		else { // insert element at the rear
			queue[rear] = data;
			rear++;
		}
		return;
	}

	void queueDequeue() // function to delete an elemen from the front of the queue
	{
		if (front == rear) {
			printf("\nQueue is empty\n");
			return;
		}

		else { // shift all the elements from index 2 till rear to the left by one
			for (int i = 0; i < rear - 1; i++) {
				queue[i] = queue[i + 1];
			}

			rear--; // decrement rear
		}
		return;
	}

	void queueDisplay()
	{
		int i;
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}

		// traverse front to rear and print elements
		for (i = front; i < rear; i++) {
			printf(" %d <-- ", queue[i]);
		}
		return;
	}

	void queueFront()
	{
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}
		printf("\nFront Element is: %d", queue[front]);
		return;
	}
};

int main(void)
{
	
	Queue q(4);

	q.queueDisplay();

	q.queueEnqueue(20);
	// q.queueEnqueue(30);
	// q.queueEnqueue(40);
	// q.queueEnqueue(50);

	q.queueDisplay();

	q.queueEnqueue(60);

	q.queueDisplay();

	// q.queueDequeue();
	q.queueDequeue();

	printf("\n\nafter two node deletion\n\n");

	q.queueDisplay();

	q.queueFront();

	return 0;
}
