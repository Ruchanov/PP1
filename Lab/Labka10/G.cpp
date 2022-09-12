#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<pair<string,int>,pair<string,int>> m;
    while(n--){
        string s,s2;
        int x,x2;
        cin>>s>>x>>s2>>x2;
        m.insert(make_pair(make_pair(s,x),make_pair(s2,x2)));
    }
}