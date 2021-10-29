/*

Precedence Table:
^              Right to left
* , /		   left to right
+ , -          left to right
(			opening bracket

Algorithm :

1. Create an empty stack
2. Traverse infix expression from left to right:
	(a) Operand : output it
	(b) Left parenthesis : Push it in stack
	(c) Right parenthesis : pop from stack until we get a left bracket. Append all popped
							characters to out postfix string. Pop left parenthesis also.
	(d)	Operator:
	If our stack is empty, push it.
	Else

	(i) If precedence of current Operator is greater than precedence of Operator at
	top of stack, push current Operator.
	(ii) Pop out all Operators with precedence greater than current Operator.

3. Pop all elements remaining in stack.

*/

int precedence(char c) {

	if (c == '^')
		return 3;

	else if (c == '*' || c == '/')
		return 2;

	else if (c == '+' || c == '-')
		return 1;

	else
		return -1;
}

string infixToPostfix(string s)
{
	string postfix;
	stack<char> stk;

	for (char ch : s) {

		if ((ch >= 'a' and ch <= 'z') || (ch >= 'A' and ch <= 'Z') || (ch >= '0' and ch <= '9'))
			postfix += ch;

		else if (ch == '(')
			stk.push(ch);

		else if (ch == ')') {
			while (stk.top() != '(') {
				postfix += stk.top();
				stk.pop();
			}

			stk.pop();
		}
		else {

			while (!stk.empty() and precedence(ch) <= precedence(stk.top())) {
				postfix += stk.top();
				stk.pop();
			}

			stk.push(ch);
		}
	}

	while (!stk.empty()) {
		postfix += stk.top();
		stk.pop();
	}

	return postfix;
}





