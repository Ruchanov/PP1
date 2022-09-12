#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2="";
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            cout << char('a' + cnt);
            cnt = 0;
        } else cnt++;
    }
    // cout<<s2;
    return 0;
}