/*print all the duplicates and their counts in the input string

Sample Input 1
geeks for geeks

Sample Output 1
,2
e,4
g,2
k,2
s,2

Constraints:
* The output of duplicates should be sorted.
* even the space can be  duplicated.

*/

#include<iostream>
#include<cstring>
using namespace std;
//sorting the string using bubble sort
string sort(string s){
    int size = s.size();
    char temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(s[j]>s[j+1]){
                temp = s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }
        }
    }
    return s;
}

//while finding the duplicate the count is always initialised to one, since it is known that the charecter(in a string) or an element(in an array) always occurs once.
void findDuplicate(string str){
    string s1;
    s1 = sort(str);
    string s;
    int n= str.size();
    for(int i=0;i<n;i++){
          int count=1;
        for(int j=i+1;j<n;j++){
            if(s1[i]==s1[j] && s1[i]!='/'){
                count++;
                s1[j]='0';
              //initialising s1[j]=0 for avoiding the count of visited strings.
            }
             
        }
        if(count>1 && s1[i]!='0' ){
            cout<<s1[i]<<","<<count<<endl;
            }
            if(s[i]=='/'){
                cout<<" "<<","<<count<<endl;
            }
    }
}
int main(){
    string s;
    cout<<"string: ";
    getline(cin,s);
    findDuplicate(s);
}
