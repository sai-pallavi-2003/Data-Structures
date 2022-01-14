/*finding the duplicate element or the element which occurs more than once*/

#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"n: ";
    cin>>n;
    cout<<"array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count,check[100];
    for(int i=0;i<n;i++){
        if(check[i]==1){
            continue;
        }
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                check[j] = 1;
                count++;
            }
        }
        if(count!=1){
            cout<<"duplicate is: "<<arr[i]<<endl;
        }
    
        
    }
    
}
