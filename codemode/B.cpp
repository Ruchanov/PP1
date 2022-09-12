#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> ss;
    bool ok=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='('){
            ss.push(s[i]);
        }else if(ss.empty()){
            ok=false;
        }

        }
    }
    // for(int i=0;i<s.size();i++){
    //     if(s[i]==)
    // }
    // if(ss.empty()){
    //     cout<<"Yes";
    // }
    if(ss.empty()){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}