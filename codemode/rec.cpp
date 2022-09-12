#include<bits/stdc++.h>
using namespace std;
string s2="";
string rec(string s, int i){
    if(i<0) return s2;
    if(s[i]=='(') s[i]=')';
    s2+=s[i];
    return rec(s,i-1);
}
int main(){
    string s;
    cin>>s;
    int i=s.size()-1;
    cout<<s<<rec(s,i);
    return 0;
}