#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(st.empty()){
        st.push(s[i]);
        }else{
            int a=sqrt((st.top()-48)*10+s[i]-48);
            if(a*a==(st.top()-48)*10+s[i]-48){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }    
    }
    if(st.empty()){
        cout<<"Stack is empty";
        return 0;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}