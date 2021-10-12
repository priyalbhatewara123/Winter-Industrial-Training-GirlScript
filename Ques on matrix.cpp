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

1 2 3
4 5 6
7 8 9

after rotation

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