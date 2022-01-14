/* input an array of size 'n' finding the number of times every element occurs in this array.*/

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
    int count,check[5];
  
  //count variable is used to keep a track of the count of the elements 
  // check array is used to check if a particular element has been checked/visited, the datatype of this can even be bool since it assigns either one or zero only
  //just to indicate if an element has been checked 
  
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
        cout<<"frequency of "<<arr[i]<<"is: "<<count<<endl;
    }
}
