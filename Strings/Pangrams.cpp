/* A pangram is a string that contains every letter of the alphabet.
Given a sentence determine whether it is a pangram in the English alphabet. Ignore case. Return either pangram or not pangram as appropriate.

Example
"the quick brown fox jumps over the lazy dog"
The string contains all letters in the English alphabet, so return pangram.
*/


#include<iostream>
using namespace std;
string pangrams(string s) {
  //initialise an array 'arr' to all zeroes (here we are assuming that each element in array depicts to each alphabet)
    int arr[26]={0};
  //using the for each loop because we dont know the length of the string
    for(char c:s){
      //ASCII values for lower case alphabets : 97 to 122
        if(c>=97 && c<=122){
            arr[c-97]=1;
          //if c lies in this range we change the respective element to 1, if b is present -> b will have the ascii value of 98->arr[98-97]=arr[1]=1
        }
      //ASCII values for upper case alphabets: 65 to 90
        else if(c>=65 && c<=90){
            arr[c-65]=1;
          //if c lies in this range we change the respective element to 1.
        }
    }
    int count =0;
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            count =1;
        break;
        }           
        }
    if(count==1)
        return "not pangram";
    return "pangram";
}
int main(){
    string str,res;
    cout<<"string: ";
    getline(cin,str);
    res= pangrams(str);
    cout<<"result: "<<res;
}

//this probelm can even be solved using boolean
