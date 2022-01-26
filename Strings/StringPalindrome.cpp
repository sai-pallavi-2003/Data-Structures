/*checking if the given string is a palindrome*/


#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    char stringin[20];
    cout<<"give the string to check: ";
    cin>>stringin;
    int len;
    int flag=0;
    len = strlen(stringin);
    for (int i=0;i<len;i++){
        if(stringin[i]!=stringin[len-i-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"not palindrome";
    }
    else{
        cout<<"palindrome";
    }
}
