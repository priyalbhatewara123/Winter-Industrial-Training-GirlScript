/*
Sieve of Eratosthenes
Find all prime numbers upto n.
*/

int main() {
	int n; cin >> n;

	int arr[n + 1] = {0};

	arr[2] = 1;

	//mark all odd numbers as prime
	for (int i = 3; i <= n; i += 2)
		arr[i] = 1;

	for (int i = 3; i <= n; i += 2) {
		if (arr[i] == 1) {
			//mark it's multiple as non prime
			for (int j = i * i ; j <= n ; j += i) {
				arr[j] = 0;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 1) {
			cout << i << " ";
		}
	}

	return 0;
}

/*
5 -> 10 , 15 , 20 , 25 ....
7 -> 14 , 21 , 28 , 35 , 42 , 49 ...
*/