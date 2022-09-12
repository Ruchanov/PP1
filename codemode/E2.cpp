#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    set<string> ss;
    set<string> :: iterator it;
    while(m--){
        string s;
        cin>>s;
        ss.insert(s);
    }
    if(ss.size()<n){
        cout<<"Jaqs is mad";
    }
    for(it=ss.begin();it!=ss.end();it++){
        cout<<*it<<" ";
    }
    //sort(ss.begin(),ss.end())
    return 0;
}