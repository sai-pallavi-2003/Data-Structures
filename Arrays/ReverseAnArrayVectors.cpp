/*reverse an array of given size*/

#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int el,n;
    cout<<"give n: ";
    cin>>n;
    cout<<"give the elements: ";
    for(int i=0;i<n;i++){
        cin>>el;
        arr.push_back(el);
    }
    reverse(arr.begin(),arr.end());
   
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
