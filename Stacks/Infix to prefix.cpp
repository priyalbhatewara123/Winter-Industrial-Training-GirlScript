/*

Infix: x + y * z
Prefix: +x*yz

x + (y * z)
x + (*yz)
+x*yz


Infix: (x+y) * (z+w)
Prefix: *+xy+zw

Infix: x + y * z / w + u
Prefix: ++x/*yzwu


Algorithm :

1. Create an empty stack
2. Traverse infix expression from right to left:
	(a) Operand : output it
	(b) Right parenthesis : push to stack
	(c) Left parenthesis: pop from stack until we get a right bracket. Append all popped
						characters to out prefix string. Pop right parenthesis also.
	(d)	Operator:
	If our stack is empty, push it.
	Else

	(i) If precedence of current Operator is greater than precedence of Operator at
	top of stack, push current Operator in stack.
	(ii) Pop out all Operators with precedence greater than current Operator.

3. Pop all elements remaining in stack.
4. Reverse string prefix.

*/




