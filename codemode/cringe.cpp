#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    vector<string> v,v2;
    vector<string> :: iterator it;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<m;i++){
        cin>>s;
        v2.push_back(s);
    }
    int cnt=0;
    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v.size();j++){
            if(v2[i]==v[j]){
                cnt++;
            }
        }
    }
    if(cnt==0){
        cout<<"Rakhmet, Yerla!Krasavchik!@erla1302";
    }else{
        cout<<"Emae, balin"<<endl<<cnt*1000;
    }
    return 0;
}