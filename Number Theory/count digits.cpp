/*
1. Count number of digits in an integer.

I/P: 1876
O/P: 4
*/

//Solution 2:
// 3.67 -> floor(3.67) = 3 , ceil(3.67) = 4
floor(log10(n) + 1) //O(1)


//Solution 3:
string temp = to_string(n);
return temp.length();