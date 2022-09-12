#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s>>s2;
    int sum=0,sum2=0;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s2[i]){
            cnt++;
        }
    }
    if(cnt>2){
        cout<<"No";
        return 0;
    }
    for(int i=0;i<s.size();i++){
        sum+=s[i];
    }
    for(int i=0;i<s2.size();i++){
        sum2+=s2[i];
    }
    if(sum==sum2){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}