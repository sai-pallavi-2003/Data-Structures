/* Two pointers is really an easy and effective technique that is typically used for searching pairs in a sorted array.
it is an optimised version to the brute force approach

problem statement :
Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.

brute force:
using two loops : T.C :O(n^2)

optimised : 
two-pointer approach : T.C : O(n) 
 */

int twoSum(int arr[], int n, int x){
  //pointer i is initialized to 0
    int i=0;
  //pointer j is intialised to n-1 the ending of the array
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==x){
            return 1;
        }
        //the other case could be when a[i]+a[j]>x
        else if (arr[i]+arr[j]>x){
            i++;
        }
        //the other case could be when a[i]+a[j]<x
        else{
            j--;
        }
    }
    return 0;
}
