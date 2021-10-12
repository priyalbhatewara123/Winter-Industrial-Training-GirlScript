/*

MATRIX / 2D ARRAYS

1 2 3 4
5 6 7 8
9 1 5 6

rows = 3
cols = 4

int arr[3][4];
for (int i = 0; i < rows; i++) {
	for (int i = 0; i < cols; i++) {
		arr[i][j];
	}
}

arr[i][j] = ith row and jth col

Memory allocation - Row major form
1 2 3 4 5 6 7 8 9 1 5 6
1 x = 200
2 x = 204
3 x = 208 .....


DYNAMIC MATRIX

int* arr = new int[3]; //1D dynamic array

int** arr = new int*[r]; //pointer to arr of pointers
for (int i = 0; i < r; i++) {
	arr[i] = new int[c];
}

*/