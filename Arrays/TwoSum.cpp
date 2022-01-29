/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/

#include<iostream>
using namespace std;
void findIndices(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            cout<<i<<", "<<j;
        }
        }
    }
}
int main(){
    int arr[1000],n,target;
    cout<<"n: ";
    cin>>n;
    cout<<"array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"target: ";
    cin>>target;
    findIndices(arr,n,target);
}
