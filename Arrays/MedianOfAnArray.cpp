/* finding median of a given array either sorted or unsorted.
the user gives the choice of sorting either an unsorted or sorted array.
An unsorted array is sorted first and then median is calculated.
*/


#include<iostream>
using namespace std;
int main(){
    int n,temp;
    int arr[100];
    char choice;
    cout<<"give S for sorted array and U for unsorted array: ";
    cin>>choice;
    switch (choice){
    case 'U':
    {
        cout<<"give n: ";
    cin>>n;
    cout<<"give elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
       int i,d;
    for( i=0;i<n-1;i++){
        for( d=0;d<n-i-1;d++){
        if(arr[d]>arr[d+1]){
            temp = arr[d];
            arr[d]=arr[d+1];
            arr[d+1]=temp;
        }
        }
    }
    cout<<"after sorting: ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    if(n%2!=0){
    int m=(n)/2;
    cout<<arr[m];
    }
    else{
          cout<<"median: "<<(arr[(n - 1)/2]+arr[n/2])/2<<endl;
    } 
    break;
    }
    case 'S':
    cout<<"give n: ";
    cin>>n;
    cout<<"give elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     if(n%2!=0){
    int m=(n)/2;
    cout<<arr[m];
    }
    else{
        cout<<endl;
         cout<<endl<<"median: "<<(arr[(n - 1)/2]+arr[n/2])/2<<endl;
    } 
    break;
    }
}
