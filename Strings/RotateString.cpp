/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.

Example 1:
Input: s = "abcde", goal = "cdeab"
Output: true

Example 2:
Input: s = "abcde", goal = "abced"
Output: false

based on the Naive algorithm pattern searching where we search one pattern in a long piece of text, but here we donot have  along text so we make it from the 'string'
*/



#include<iostream>
using namespace std;
bool findGoal(string mainStr, string pattern){
    int ms = mainStr.size();
    int p = pattern.size();
    if(ms!=p){
        cout<<"not rotation.";
    }
    string final = mainStr+mainStr;
    int f= final.size();
    int i,j,shifts=0;
    for(i=0;i<=f-p;i++){
        int flag=0;
        for(j=0;j<p;j++){
            if(final[i+j]!=pattern[j]){
                flag=1;
                break;
            }   
        }
        if(flag==0){
            return true;
        }
}
return false;

}
int main(){
    string string,goalstring;
    cout<<"string: ";
    cin>>string;
    cout<<"goal string: ";
    cin>>goalstring;
    if(findGoal(string,goalstring)){
        cout<<"rotation";
    }
    else{
        cout<<"not a rotation";
    }
}
