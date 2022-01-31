/*Naive pattern searching is the simplest method among other pattern searching algorithms.
It checks for all character of the main string to the pattern
The time complexity of Naive Pattern Search method is O(m*n). The m is the size of pattern and n is the size of the main string.*/


#include<iostream>
using namespace std;
void findPattern(string mainStr, string pattern){
    int ms = mainStr.size();
    int p = pattern.size();
    int i,j,shifts=0;
    for(i=0;i<=ms-p;i++){
        // int j;
        for(j=0;j<p;j++){
            if(mainStr[i+j]!=pattern[j]){
                shifts++;
                break;
            }   
        }
        if(j==p){
            cout<<"the pattern has been found at position: "<<i+1<<endl;
        }
       
    }
    if(shifts!=0){
        cout<<"number of shifts made: "<<shifts;
    }
    else{
        cout<<"no shifts made";
    }
}
int main(){
    string ms,pattern1;
    cout<<"mainstring: ";
    cin>>ms;
    cout<<"pattern to be found: ";
    cin>>pattern1;
    findPattern(ms,pattern1);
}
