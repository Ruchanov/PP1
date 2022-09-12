#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    stack<int> st;
    for(int i=0;i<n;i++){
        cin>>a[i];
        st.push(a[i]);
        if(a[i]>st.top()){
            st.pop();
            st.push(a[i]);
        }    
    }

}