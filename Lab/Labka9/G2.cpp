#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st,st2;
    //queue<char> q;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' || st.empty()){
            st.push(s[i]);
        }else{
            if(st.top()=='1' && s[i]=='1'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }
    while(!st.empty()){
        st2.push(st.top());
        st.pop();
    }
    while(!st2.empty()){
        cout<<st2.top();
        st2.pop();
    }
    return 0;
}