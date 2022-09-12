#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,u;
    int cnt=0, cnt2=0;
    string s;
    cin>>n>>l>>u>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>96 && s[i]<123){
            cnt++;
        }else{
            cnt2++;
        }
    }
    if(cnt2*l>cnt*u){
        cout<<u*cnt;
        return 0;
    }else if(cnt*u>cnt2*l){
        cout<<l*cnt2;
        return 0;
    }else if(cnt==0 || cnt2==0){
        cout<<0;
    }
    return 0;
}