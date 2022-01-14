/* Finding Kth smallest element in an array of size 'n' .
the given array is first sorted and then the smallest element is found out*/

#include<iostream>
using namespace std;
int main(){
    int k,n;
    cout<<"n: ";
    cin>>n;
    int arr[n];
    cout<<"Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"k: ";
    cin>>k;
    int temp;
  //sorting using BubbleSort.
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
    }
    }
    cout<<"array after sorting: ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"smallest k element is: ";
    cout<<arr[k-1];
}
