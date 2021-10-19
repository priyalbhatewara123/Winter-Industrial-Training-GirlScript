
void towerOfHanoi(int n  , char source , char helper , char destination) {

	//base case
	if (n == 0)
		return;

	towerOfHanoi(n - 1 , source , destination , helper);
	cout << "Shift disk " << n << " from " << source << " to " << destination << endl;

	towerOfHanoi(n - 1 , helper , source , destination);
}

/*

Shift disk 1 from A to B
Shift disk 2 from A to C
Shift disk 1 from B to C
Shift disk 3 from A to B
Shift disk 1 from C to A
Shift disk 2 from C to B
Shift disk 1 from A to B
Shift disk 4 from A to C
Shift disk 1 from B to C
Shift disk 2 from B to A
Shift disk 1 from C to A
Shift disk 3 from B to C
Shift disk 1 from A to B
Shift disk 2 from A to C
Shift disk 1 from B to C


*/