#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v,v2,v3,v4;
    int n,m,k;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        v.push_back(s);
    }
    cin>>m;
    while(m--){
        string s1;
        cin>>s1;
        v2.push_back(s1);
    }
    cin>>k;
    while(k--){
        string s2;
        cin>>s2;
        v3.push_back(s2);
    }
    bool res2=true;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v[i]==v2[j]){
                res2=false;
            }
        }
        if(res2==true){
            cout<<v[i]<<" ";
        }
        res2=true;
    }
    cout<<endl;
    bool res=true;
    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v.size();j++){
            if(v2[i]==v[j]){
                res=false;
            }
        }
        if(res==true){
            cout<<v2[i]<<" ";
        }
        res=true;
    }
    cout<<endl;
    for(int i=0;i<v3.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v3[i]==v2[j]){
                v4.push_back(v3[i]);
            }
        }
        // cout<<endl;
    }
    for(int i=0;i<v4.size();i++){
        for(int j=0;j<v.size();j++){
            if(v3[i]==v[j]){
                cout<<v3[i]<<" ";
            }
        }
    }
    if(v4.size()==0){
        cout<<"-1";
    }
    return 0;
}