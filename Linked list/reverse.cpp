/*
Reverse singly LL.

head = 1
1 -> 2 -> 3  -> 4 -> 5 -> NULL

After reversing:
5 -> 4 -> 3 -> 2 -> 1 -> NULL
head = 5

*/

void reverse(node* &head) {

	//edge cases
	if (head == NULL || head->next == NULL)
		return;

	node* prev = NULL;
	node* curr = head;
	node* nexxt;

	while (curr != NULL) {
		nexxt = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = nexxt;
	}

	head = prev;
}

/*

head = 1
NULL <- 1 <- 2 <- 3 <- 4 <- 5      NULL

prev = 5
curr = NULL
nexxt = NULL

*/