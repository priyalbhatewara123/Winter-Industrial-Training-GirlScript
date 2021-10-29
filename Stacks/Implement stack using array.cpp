#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 10

class Stack {
private:
	int stack[MAX_SIZE];
	int top;

public:
	Stack() {
		top = -1;
	}

	void push(int data) {

		//check if stack is full
		if (isFull()) {
			cout << "Stack is already full" << endl;
		}
		else {
			stack[++top] = data;
		}
	}

	void pop() {
		if (isEmpty()) {
			cout << "Stack is Empty" << endl;
		}
		else {
			top--;
		}
	}

	bool isFull() {
		return top >= (MAX_SIZE - 1);
	}

	bool isEmpty() {
		return top == -1;
	}

	int peek() {
		if (top != -1)
			return stack[top];
		else
			- 1;
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);

	cout << s.peek() << endl;
	s.pop();
	cout << s.peek() << endl;
}