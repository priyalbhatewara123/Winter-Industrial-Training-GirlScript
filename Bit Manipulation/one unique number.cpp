/*
Array of integers where all number will appear twice expect for one. Find that unique no?
Can't use any extra space.

[2,1,6,1,2,3,6]
3
*/

2 - 010
1 - 001
6 - 110
1 - 001
2 - 010
3 - 011
6 - 110

xor - 011

/*
Array of integers with all numbers appearing twice expect 2 numbers. Find those 2 numbers.

[2,3,4,1,2,3,4,5]
1 5

*/

2 - 010
1 - 001
6 - 110
1 - 001
2 - 010
3 - 011
6 - 110
7 - 111

xor of all elements ->  xor1 -> 100

position of 1st bit -> 3

xor all elements with set bit at position 3 ->
110
110
111

xor2 -> 111

xor1 ^ xor2

pos
1 << (pos - 1)
  1 << 2 = 100 = mask

for (int i = 0; i < n; i++) {
	if (arr[i] & mask) {
		xor2 = xor2 ^ arr[i];
	}
}