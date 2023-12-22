#include <bits/stdc++.h>
using namespace std;

class Stack
{
	queue<int> q1, q2; // Two inbuilt queues
public:
	void push(int x)
	{
		q2.push(x); // Push x first in empty q2

		while (!q1.empty()) // Push all the remaining elements in q1 to q2.
		{
			q2.push(q1.front());
			q1.pop();
		}

		queue<int> q = q1; // swap the names of two queues
		q1 = q2;
		q2 = q;
	}

	void pop()
	{
		if (q1.empty()) // if no elements are there in q1
			return;
		q1.pop();
	}

	int top()
	{
		if (q1.empty())
			return -1;
		return q1.front();
	}
	int size() { return q1.size(); }
};

// Driver code
int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);

	cout << "current size: " << s.size() << endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	cout << "current size: " << s.size() << endl;
	return 0;
}
