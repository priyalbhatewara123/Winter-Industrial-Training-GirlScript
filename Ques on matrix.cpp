/*

Wave print

1 2 3
4 5 6
7 8 9

o/p: 1 4 7 8 5 2 3 6 9

Transpose:

i/p:

1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

o/p:
1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(j>i){
			swap(arr[i][j] , arr[j][i]);
		}
	}
}


1. Rotate the matrix anticlockwise 90d
input:
1 2 3
4 5 6
7 8 9

after rotation
output:
3 6 9
2 5 8
1 4 7


1st step - Reverse all rows
3 2 1
6 5 4
9 8 7

2nd - Transpose
3 6 9
2 5 8
1 4 7









2. Spiral print of a matrix

1 2 3 4
4 5 6 7
8 9 10 11
12 13 14 15

o/p: 1 2 3 4 7 11 15 14 13 12 8 4 5 6 10 9


*/

//n rows and m cols
int firstRow = 0;
int lastRow = n - 1;
int firstCol = 0;
int lastCol = m - 1;

while (firstRow <= lastRow and firstCol <= lastCol)
{
	//print firstrow
	for (int i = firstCol; i <= lastCol; i++) {
		cout << matrix[firstRow][i];
	}

	firstRow++;

	//print last col
	for (int i = firstRow; i <= lastRow; i++) {
		cout << matrix[i][lastCol];
	}

	lastCol--;

	//last row
	if (lastRow >= firstRow) {
		for (int i = lastCol; i >= firstCol; i--) {
			cout << matrix[lastRow][i];
		}
	}

	lastRow--;

	//first col
	if (firstCol <= lastCol) {
		for (int i = lastRow; i >= firstRow; i--) {
			cout << matrix[i][firstCol];
		}
	}

	firstCol++;
}