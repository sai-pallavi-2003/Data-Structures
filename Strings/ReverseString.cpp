/*reversing a string*/


#include<iostream>
#include<string>
using namespace std;
void Reverse(string s){
    int len = s.size();
    cout<<"after reversing: ";
    for(int i = len;i>=0;i--){
        cout<<s[i];
    }
}
int main(){
    string str;
    cout<<"give string: ";
    getline(cin,str);
    Reverse(str);
}
