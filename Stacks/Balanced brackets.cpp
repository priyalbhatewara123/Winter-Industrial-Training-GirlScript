/*
Problem Statement:
Given an expression string exp, write a program to examine whether the pairs and the orders
of “{“, “}”, “(“, “)”, “[“, “]” are correct in exp.

Input: exp = “[()]{}{[()()]()}”
Output: Balanced

Input: exp = “[(])”
Output: Not Balanced

*/

bool isBalanced(string x) {
	stack<char> stk;

	for (char ch : x) {
		if (ch == '[' || ch == '(' || ch == '{')
			stk.push(ch);

		else {
			if (ch == ')') {
				if (!stk.empty() and stk.top() == '(')
					stk.pop();
				else
					return false;
			}
			if (ch == '}') {
				if (!stk.empty() and stk.top() == '{')
					stk.pop();
				else
					return false;
			}
			if (ch == ']') {
				if (!stk.empty() and stk.top() == '[')
					stk.pop();
				else
					return false;
			}
		}
	}

	return stk.empty() ? true : false;
}





