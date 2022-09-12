#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v,q,l;
    vector<pair<string,string>> v2;
    vector<pair<string,string>> :: iterator it;
    while(n--){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int m;
    cin>>m;
    string ss;
    while(m--){
        string s2,s3;
        cin>>s2>>s3;
        v2.push_back(make_pair(s2,s3));
    }
    cin>>ss;
    for(it=v2.begin();it!=v2.end();it++){
        if((*it).first==ss){
            q.push_back((*it).second);
        }
        if((*it).second==ss){
            q.push_back((*it).first);
        }
    }
    for(int i=0;i<q.size();i++){
        for(int j=0;j<v.size();j++){
            if(q[i]==v[j]){
                l.push_back(q[i]);
            }
        }
    }
    if(l.size()==0){
        cout<<"0";
        return 0;
    }
    sort(l.begin(),l.end());
    for(int i=0;i<l.size();i++){
        cout<<l[i]<<" ";
    }
    return 0;
}