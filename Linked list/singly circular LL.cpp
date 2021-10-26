/*
Various operations on Singly Circular Linked List.
*/

class node {
public:
	int data;
	node* next;

	//contructor
	node(int d) {
		data = d;
		next = NULL;
	}
}

//1. Insertion at head
void insertAtHead(node* &tail , int d) {

	//if LL is empty
	if (tail == NULL) {
		tail = new node(d);
		tail -> next = tail; //to make it circular
	}

	else {
		node* n = new node(d);
		n -> next = tail -> next;
		tail -> next = n;
	}
}


//2. Insertion at tail
void insertAtTail(node* &tail , int d) {

	//if LL is empty
	if (tail == NULL) {
		tail = new node(d);
		tail -> next = tail; //to make it circular
	}
	else {
		node* n = new node(d);
		n -> next = tail -> next;
		tail -> next = n;
		tail = n;
	}
}

//3. Insertion after some node
void insertInMiddle(node* &tail , int d , int after) {

	//if LL is empty
	if (tail == NULL) {
		tail = new node(d);
		tail -> next = tail; //to make it circular
	}
	else {
		node* temp = tail -> next;
		do {
			if (temp->data == after) {
				node* n = new node(d);
				n -> next = temp -> next;
				temp -> next = n;

				if (temp == tail)
					tail = n;

				return;
			}

			temp = temp -> next;

		} while (temp != tail -> next);
	}
}

//4. Delete at head
void deleteHead(node* &tail) {

	//check if LL is empty
	if (tail == NULL)
		return;

	//check if ll has a single node
	if (tail -> next == tail) {
		tail = NULL;
		return;
	}

	node* temp = tail -> next;
	tail -> next = temp ->next;
	delete temp;
}

void deleteAtTail(node* &tail) {
	//check if LL is empty
	if (tail == NULL)
		return;

	//check if ll has a single node
	if (tail -> next == tail) {
		tail = NULL;
		return;
	}

	//iterate till second last node
	node* temp = tail -> next;
	while (temp->next != tail) {
		temp = temp -> next;
	}

	node* node_to_delete = temp->next;
	temp->next = tail -> next;
	tail = temp;
	delete node_to_delete;
}

void deleteAfter(node* &tail , int after) {
	node* temp = tail -> next;
	do {
		if (temp->data == after) {
			node* node_to_delete = temp->next;
			temp->next = temp->next->next;

			if (node_to_delete == tail)
				tail = temp;

			delete node_to_delete;
			break;
		}

	} while (temp != tail->next);
}


bool find(node* tail , int d) {

	if (tail == NULL)
		return false;

	node* temp = tail -> next;
	do {
		if (temp->data == d)
			return true;

		temp = temp->next;

	} while (temp != tail->next);

	return false;
}
