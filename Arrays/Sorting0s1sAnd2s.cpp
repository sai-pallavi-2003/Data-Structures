/*The given array consists of only 0s 1s and 2s, and this array has to be sorted in ascending order,
such that all 0s are at the beginning, 1s in the middle and 2s at the end.

This is a Brute Force approach and not using DNF algorithm.

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout<<"give n: ";
    cin>>n;
    cout<<"give array of 0,1 and 2s: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int zeroc=0,onec=0,twoc=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroc++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            onec++;
        }
    }
  
      for(int i=0;i<n;i++){
        if(arr[i]==2){
            twoc++;
        }
    }
    int i=0;
    while(zeroc!=0){
        arr[i]=0;
        i++;
        zeroc=zeroc-1;
    }
     while(onec!=0){
        arr[i]=1;
        i++;
        onec=onec-1;
    }
     while(twoc!=0){
        arr[i]=2;
        i++;
        twoc=twoc-1;
    }
  
    cout<<"final array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
