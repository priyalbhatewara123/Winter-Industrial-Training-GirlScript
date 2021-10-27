/*
Intersection of 2 linked list:
problem link: https://leetcode.com/problems/intersection-of-two-linked-lists/
*/


/*
Dry Run:

A -> a1 , a2 , c1 , c2 , c3
B -> b1 , b2 , b3 , c1 , c2 , c3

a = a1 a2 c1 c2 c3 b1 b2 b3 c1
b = b1 b2 b3 c1 c2 c3 a1 a2 c1

*/

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	ListNode* a = headA;
	ListNode* b = headB;

	while (a != b) {
		if (a != NULL)
			a = a->next;

		else if (a == NULL)
			a = headB;

		if (b != NULL)
			b = b -> next;

		else if (b == NULL)
			b = headA;

	}
	return a;
}
