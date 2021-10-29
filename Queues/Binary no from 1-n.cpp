/*
Generate all binary numbers from 1 to n.

Expected Time Complexity is O(n).

*/

void generateBinary(int n) {
	queue <string> q;
	q.push("1");

	while (n--) {

		string decimal = q.front();
		q.pop();

		cout << decimal << endl;
		q.push(decimal + "0");
		q.push(decimal + "1");
	}

	return ;
}


/*
n = 10
1 : 1
2 : 10
3 : 11
4 : 100
5 : 101
6 : 110
7 : 111
8 : 1000
9 : 1001
10 : 1010
11 : 1011
12 : 1100
13 : 1101


queue:  101 , 110 , 111 , 1000 , 1001

output: 1 , 10 , 11 , 100

*/