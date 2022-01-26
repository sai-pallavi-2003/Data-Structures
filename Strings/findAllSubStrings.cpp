/* given a string of any length, find all the substrings.
A substring is a continuous part of string, of variable lengths ranging from a single element to length of string.

Sample Input 0:
abcd

Sample Output 0:
a
ab
abc
abcd
b
bc
bcd
c
cd
d
*/

#include<iostream>
using namespace std;
void findSubString(string s){
    int strLen = s.length();
    for(int i=0;i<strLen;i++){
        string subStr;
      
/* the initialisation of substring has to be made inside the loop so that it gets re-initialised everytime and we get required output,
if substring is initailised outside the loop it is always initialised to null and starts printing all the elements
j should start from i but not from 0.*/
      
        for(int j=i;j<strLen;j++){
            subStr += s[j];
            cout<<subStr<<endl;
        }
    }
}
int main(){
    string str;
    cout<<"give string: ";
    cin>>str;
    findSubString(str);
}
