#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> m;
    map<int,int> :: iterator it;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    int cnt=0;
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second>=2){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}