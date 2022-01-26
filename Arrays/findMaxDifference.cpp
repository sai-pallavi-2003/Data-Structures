/* Given an array arr[] of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number. 

Input : arr = {2, 3, 10, 6, 4, 8, 1}
Output : 8
Explanation : The maximum difference is between 10 and 2.

Input : arr = {7, 9, 5, 6, 3, 2}
Output : 2
Explanation : The maximum difference is between 9 and 7.
*/

#include<iostream>
using namespace std;
void findMaxDiff(int arr[],int n){
    int maxDiff = arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]>maxDiff){
                maxDiff = arr[j]-arr[i];
            }
        }
    }
    cout<<"maxDiff: "<<maxDiff;
}
int main(){
    int arr[100], n;
    cout<<"n: ";
    cin>>n;
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findMaxDiff(arr,n);
}
