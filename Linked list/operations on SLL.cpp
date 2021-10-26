class node {
public:
	int data;
	node* next;

	//constructor
	node(int d) {
		data = d;
		next = NULL;
	}
};


// 1. Insertion at beginning - O(1)
void insertAtHead(node* &head , int d) {

	if (head == NULL) {
		head = new node(d);
		return;
	}

	node* n = new node(d);
	n->next = head;
	head = n;
}


//2. Insertion at end - O(n)
void insertAtTail(node* &head , int d) {

	if (head == NULL) {
		head = new node(d);
		return;
	}

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp -> next;
	}

	temp ->next = new node(d);
	return;
}


//3. Insertion in middle - O(pos)
void insertInMiddle(node* &head , int d , int pos) {

	//if pos = 0
	if (pos == 0) {
		insertAtHead(head , d);
	}

	else if (pos > lengthOfLL(head)) {
		insertAtTail(head , d);
	}

	else {
		node* temp = head;
		int jumps = pos - 2;
		while (jumps > 0) {
			temp = temp->next;
			jumps--;
		}

		node* n = new node(d);
		n -> next = temp -> next;
		temp -> next = n;
	}
}

/*
1    2   3     4    5
3 -> 4 -> 5 -> 7 -> 8
pos = 4
d = 6
*/

//Length of linked list - O(n)
int lengthOfLL(node* head) {

	if (head == NULL)
		return 0;

	node* temp = head;
	int length = 1;

	while (temp->next != NULL) {
		temp = temp -> next;
		length ++;
	}

	return length;
}


//Delete at head - 0(1)
void deleteHead(node* &head) {

	//corner case
	if (head == NULL)
		return;

	node* temp = head -> next;
	delete head;

	head = temp;
}

//Delete at tail - O(n)
void deleteAtTail(node* head) {
	//corner case
	if (head == NULL)
		return;

	node* temp = head;
	while (temp -> next -> next != NULL) {
		temp = temp -> next;
	}

	node* n = temp -> next;  // n is node to be deleted
	temp -> next = NULL;
	delete n;
}

//Delete at pos - O(pos)
void deleteAtMiddle(node* head , int pos) {
	node* temp = head;
	int jumps = pos - 2;
	while (jumps > 0) {
		temp = temp -> next;
		jumps--;
	}

	node* n = temp -> next;
	temp -> next = n -> next;
	delete n;
}

//Search in LL - Linear Search O(n)
bool isPresent(node* head , int element) {
	node* temp = head;

	while (temp != NULL) {
		if (temp -> data == element)
			return true;

		temp = temp -> next;
	}

	return false;
}