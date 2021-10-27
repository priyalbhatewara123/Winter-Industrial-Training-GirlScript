class node {
public:
	int data;
	node* prev;
	node* next;

	//constructor
	node(int d) {
		data = d;
		prev = NULL;
		next = NULL;
	}
};

void insertAtHead(node* &head , int d) {

	if (head == NULL) {
		head = new node(d);
	}
	else {
		node* n = new node(d);
		n -> next = head;
		head -> prev = n;

		head = n;
	}
}

void insertAfter(node* &head , int d , int after) {

	node* temp = head;
	while (temp->data != after) {
		temp = temp -> next;
	}

	node* n = new node(d);
	n -> next = temp->next;
	n -> prev = temp;
	temp -> next = n;

	if (n->next != NULL)
		n->next->prev = n;
}

void insertAtEnd(node* &head , int d) {
	if (head == NULL) {
		head = new node(d);
		return;
	}

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	node* n = new Node(d);
	temp->next = n;
	n->prev = temp;
}

void deleteHead(node* &head) {

	if (head == NULL)
		return;

	if (head -> next == NULL) {
		head = NULL;
		return;
	}

	node* node_to_delete = head;
	head = head -> next;
	head -> prev = NULL;

	delete node_to_delete;
}

void deleteAtTail(node* &head) {

	//no nodes in LL
	if (head == NULL)
		return;

	//only 1 node in LL
	if (head -> next == NULL) {
		head = NULL;
		return;
	}

	//traversed till last node
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp -> prev -> next = NULL;
	delete temp;

}


void deleteAfter(node* &head , int after) {

	if (head == NULL)
		return;

	node* temp = head;
	while (temp->data != after)
		temp = temp -> next;

	if (temp -> next == NULL)
		return;

	else if (temp->next->next == NULL) {
		temp->next = NULL;
		return;
	}
	else {
		node* node_to_delete = temp->next;
		temp -> next = node_to_delete ->next;
		node_to_delete ->next -> prev = temp;

		delete node_to_delete;
	}
}