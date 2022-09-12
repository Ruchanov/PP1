#include<bits/stdc++.h>
using namespace std;
string ss;
string sss(string s, int i){
    if(i<0) return ss;
    ss+=s[i];
    return sss(s,i-1);
}
int main(){
    string s;
    cin>>s;
    int i=s.size()-1;
    cout<<sss(s,i);
    return 0;
}