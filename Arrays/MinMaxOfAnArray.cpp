/* Given an array, finding the minimum and maximum elements. 
Brute Force approach */


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Give elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max,min;
    max = min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else{
            if(arr[i]<min){
                min = arr[i];
            }
        }
    }
    cout<<"max: "<<max<<endl<<"min: "<<min;
}
   
      
