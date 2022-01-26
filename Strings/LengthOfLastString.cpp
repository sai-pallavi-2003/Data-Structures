/* Finding the length of the last string in a given line of text*/



#include <iostream>
using namespace std;
int length(string s){
    int c=0;
    int flag =0;
    int i;
    for(i=s.length()-1;i>=0;i--){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
          //the c counter starts incrementing once it encounters a word(starting from a charecter)
            flag =1;
            c++;
        }
        else{
        if(flag==1){
            return c;
        }
        }
    }
    return c;
}
int main()
{
    string n;
    cout<<"give the strings/line of text: ";
    getline(cin,n);
    cout<<"length of the last string: "<<length(n);

    return 0;
}
