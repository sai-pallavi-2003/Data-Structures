/* Input an array of size 'n' and a number 'm',  finding if there is any triplet which has a sum of 'm' */

#include<iostream>
using namespace std;
bool FindTriplet(int n,int arr[], int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==m){
                    cout<<"triplet is: "<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    return true;
            }
        }
    }
}
return false;
}
int main(){
    int n,array[100],m;
    cout<<"n: ";
    cin>>n;
    cout<<"array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"m: ";
    cin>>m;
    FindTriplet(n,array,m);
}
