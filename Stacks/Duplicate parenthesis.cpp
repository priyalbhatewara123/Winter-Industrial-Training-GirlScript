/*
Problem Statement:
Given a balanced expression, find if it contains duplicate parenthesis or not.
A set of parenthesis are duplicate if the same subexpression is surrounded by
multiple parenthesis.

For example,

Input:  ((x+y))+z
Output: true
Explanation: Duplicate () found in subexpression ((x+y))


Input:  (x+y)
Output: false
Explanation: No duplicate () is found

*/

bool hasDuplicateParenthesis(string exp)
{
	stack<char> stk;

	for (char ch : exp) {
		if (ch != ')')
			s.push(ch);

		else {
			if (stk.top() == '(')
				return true;

			while (stk.top() != '(')
				stk.pop();

			stk.pop();
		}
	}

	return false;
}



