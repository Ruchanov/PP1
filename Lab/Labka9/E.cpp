#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    map<string,int> m;
    map<string,int> :: iterator it;
    while(n--){
        string s;
        cin>>s;
        m[s]++;
    }
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==3){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}