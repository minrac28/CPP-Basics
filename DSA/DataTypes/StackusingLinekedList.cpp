#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *link;

    Node(int n) // constructor
    {
        this->data = n;
        this->link = NULL;
    }
};

class Stack
{
    Node *top;

public:
    Stack() { top = NULL; } // constructor

    void push(int data)
    {
        Node *temp = new Node(data); // Create new node temp and allocate memory in heap

        if (!temp)
        {
            cout << "\nStack Overflow";
            exit(1);
        }

        temp->data = data; // Initialize data into temp data field
        temp->link = top;  // Put top pointer reference into temp link
        top = temp;        // Make temp as top of Stack
    }

    bool isEmpty() // Utility function to check if the stack is empty or not
    {
        return top == NULL;
    }

    int peek() // Utility function to return top element in a stack
    {
        // If stack is not empty , return the top element
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }

    void pop()
    {
        Node *temp; 

        if (top == NULL) // Check for stack underflow
        {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else
        {
            temp = top; // Assign top to temp
            top = top->link; // Assign second node to top

            free(temp);
        }
    }

    void display()
    {
        Node *temp;
        if (top == NULL)
        {
            cout << "\nStack Underflow";
            exit(1);
        }
        else
        {
            temp = top;
            while (temp != NULL)
            {
                cout << temp->data; // Print node data
                temp = temp->link;  // Assign temp link to temp
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    }
};

int main()
{
    Stack s;

    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    s.display();

    cout << "\nTop element is " << s.peek() << endl;

    s.pop();
    s.pop();

    s.display();
    cout << "\nTop element is " << s.peek() << endl;

    return 0;
}
