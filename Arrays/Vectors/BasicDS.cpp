#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    for(int i=0;i<5;i++){
        cin>>a;
        v.push_back(a);
    }
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it;
        cout<<endl;
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it;
        cout<<endl;
    }
    v.pop_back();
    // cout<<"after pop back: "<<v.pop_back();
     for(auto it=v.begin();it!=v.end();it++){
        cout<<*it;
        cout<<endl;
    }
    set<int>st;
    st.insert(2);
    st.insert(1);
    st.insert(3);
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it;
    }
}
