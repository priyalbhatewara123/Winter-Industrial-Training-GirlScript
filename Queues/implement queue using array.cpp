#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
	int* queue;
	int front;
	int rear;
	int capacity;

public:
	Queue(int c) {
		queue = new int[c];
		front = rear = -1;
		capacity = c;
	}

	~Queue() {
		delete [] queue;
	}

	void enqueue(int data) {
		if (isFull()) {
			cout << "Queue is full" << endl;
		}
		else {
			if (front == -1)
				front = 0;
			rear = rear + 1;
			queue[rear] = data;
		}
	}

	void dequeue() {
		if (isEmpty())
			cout << "Queue is Empty" << endl;

		else if (front >= rear)
			front = rear = -1;

		else
			front = front + 1;
	}

	void isFull() {
		if (rear == capacity - 1)
			return true;
		else
			return false;
	}

	void isEmpty() {
		if (front == -1 and rear == -1)
			return true;
		else
			return false;
	}
}