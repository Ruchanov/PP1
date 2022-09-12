#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    int x;
    //string a[m];
    queue<pair<string,int>> q;
    queue<pair<string,int>> :: iterator it;
    while(n--){
        cin>>s>>x;
        q.push(make_pair(s,x));
    }
    int k;
    while(!q.empty()){
        k=q.front();
        q.pop();
    }
    cout<<k;
    return 0;
}