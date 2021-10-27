/*
Problem link : https://leetcode.com/problems/linked-list-cycle/
*/

bool hasCycle(ListNode *head) {
	ListNode* slow = head;
	ListNode* fast = head;

	while (fast != NULL and fast ->next != NULL) {
		slow = slow -> next;
		fast = fast -> next -> next;

		if (slow == fast)
			return true;
	}
	return false;
}


/*
Dry Run:

0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 2 (cycle)

slow = 0 , 1 , 2 , 3 , 4 , 5 , 6
fast = 0 , 2 , 4 , 6 , 2 , 4 , 6

*/
