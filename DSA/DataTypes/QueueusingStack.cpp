#include <bits/stdc++.h>
using namespace std;

struct Queue
{
	stack<int> s1, s2;

	void enQueue(int x)
	{
		while (!s1.empty()) // Move all elements from s1 to s2
		{
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x); // Push item into s1

		while (!s2.empty()) // Push everything back to s1
		{
			s1.push(s2.top());
			s2.pop();
		}
	}

	int deQueue()
	{
		if (s1.empty()) // if first stack is empty
		{
			return -1;
		}

		int x = s1.top(); // Return top of s1
		s1.pop();
		return x;
	}
};

int main()
{
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);

	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';

	return 0;
}
