#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    stack<char> st;
    while(n--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='<' || s[i]=='('){
                st.push(s[i]);
            }else if(s[i]=='}' || s[i]=='>'  || s[i]==')'){
                if(st.empty()){
                    cout<<"NO";
                    return 0;
                }
                else{
                    st.pop();
                }

            }
        }
    }
    if(st.empty()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}