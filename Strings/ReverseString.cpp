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


/*void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two corners 
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}*/
