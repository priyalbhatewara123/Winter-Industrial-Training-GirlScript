void func(int arr[] , int n) {

	//1. XOR of all elements
	int xor1 = 0;
	for (int i = 0; i < n; i++) {
		xor1 = xor1 ^ arr[i];
	}

	//2. Find position of 1st set bit from right
	int temp = xor1;
	int pos = 0;

	while ((temp & 1) == 0) {
		pos++;
		temp >> 1;
	}


	//3. xor all elements with set bit at pos
	int mask = (1 << pos);
	int xor2 = 0;

	for (int i = 0; i < n; i++) {
		if ((arr[i] & mask) > 0)
			xor2 = xor2 ^ arr[i];
	}

	int a = xor2;
	int b = xor1 ^ xor2;

	cout << a << " " << b;

	return;
}