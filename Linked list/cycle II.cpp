/*
Proof of Floyd's Algorithm:
path of slow = 0 , 1 , 2 , 3 , 4 , 5 , 6
path of fast = 0 , 2 , 4 , 6 , 2 , 4 , 6

speed of fast = 2 * speed of slow
distance covered by fast = 2 * distance covered by slow
x + 2y + z = 2 * (x+y)
x + 2y + z = 2x + 2y
x + z = 2x
z = x
*/

ListNode *detectCycle(ListNode *head) {
	ListNode* slow = head;
	ListNode* fast = head;

	while (fast != NULL and fast -> next != NULL) {
		slow = slow ->next;
		fast = fast -> next -> next;

		if (slow == fast) {
			slow = head;

			if (slow == fast)
				return head;

			while (fast != slow) {
				fast = fast -> next;
				slow = slow -> next;
			}
			return slow;
		}
	}

	return NULL;
}