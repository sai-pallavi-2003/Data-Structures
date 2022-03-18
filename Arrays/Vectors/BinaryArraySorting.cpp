/*A binary array is an array consisting of only 0s and 1s.
You are given a binary array "arr" of size ‘N’. Your task is to sort the given array and return this array after sorting.
Sample Input 1 :
2
3 
0 1 0
4
0 0 0 1
Sample Output 1 :
0 0 1
0 0 0 1
*/

/*completing the given function*/

#include<vector>
#include <bits/stdc++.h>
vector<int> sortBinaryArray(vector<int> arr, int n)  {
    sort(arr.begin(),arr.end());
    return arr;
 	// Write your code here
}

/*vectors are very useful for performing operations on dynamic size arrays.
sort() is an inbuilt function to sort the data in ascending order
another advantage of vector includes returning the whole vector by making suitable changes
without using vectors we could have used binary search*/
