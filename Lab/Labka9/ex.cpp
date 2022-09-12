#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> st,st2;
    st.push(1);
    st.push(2);
    st.push(3);
    queue<int> q;
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