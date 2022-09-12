#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    queue<char> q;
    for(int i=0;i<s.size();i++){
        if(!(s[i]=='1' && s[i+1]=='1')){
            q.push(s[i]);
        }else i += 2;
    }
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    return 0;
}