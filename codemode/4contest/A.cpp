#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    cin>>s>>c;
    vector<int> v,v2(s.size(),INT_MAX-1);
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v2.size();j++){
            v2[j]=min(v2[j],abs(v[i]-j));
        }
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}