* A left rotation operation on an array of size 'n' shifts each of the array's elements 1 unit to the left. 
Given an integer,'d', rotate the array that many steps left and return the result.
Example:
d=2
arr=[1,2,3,4,5]
After 2 rotations, arr' = [3,4,5,1,2]
*/

//this question has been taken from Hackerrank


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N, d, i;
    cin >> N >> d;
    int start = N - d;
    int *arr = new int[N];
  //here, rather than modifying the array after taking the input, we take in array according to the given condition.
    for (i=0; i<N; ++i) {
        if (start == N) 
          start = 0;
        cin >> arr[start++];
    }
    for (i=0; i<N; ++i) 
      cout << arr[i] << " ";
    return 0;
}
