#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v,v2,a;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    while(m--){
        int y;
        cin>>y;
        v2.push_back(y);
    }
    unique(v.begin(),v.end());
    unique(v2.begin(),v2.end());
    for(int i=0;i<v.size() || i<v2.size();i++){
        a.push_back(v[i]);
        a.push_back(v2[i]);
    }
    // if(v.size()>v2.size()){
    //     for(int i=0;i<v.size();i++){
    //         a.push_back(v[i]);
    //         a.push_back(v2[i]);
    //     }
    // }else{
    //     for(int i=0;i<v2.size();i++){
    //         a.push_back(v[i]);
    //         a.push_back(v2[i]);
    //     }
    // }
    unique(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}