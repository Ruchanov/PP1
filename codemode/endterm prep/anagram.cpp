#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    vector<string> v;
    string s;
    while(cin>>s){
        v.push_back(s);
    }
    string s2=v[v.size()-1];
    v.erase(v.end()-1,v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    while(next_permutation(s2)){
        for(int i=0;i<v.size();i++){
            if(v[i]==s2){
                
            }
        }
    }
}