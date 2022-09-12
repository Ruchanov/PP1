#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int> q;
    while(n--){
        int x;
        cin>>x;
        q.push(x);
    }
    int k,cnt=0;
    cin>>k;
    while(!q.empty()){
        if(q.front()>=k){
            cnt++;
        }
        q.pop();
    }
    cout<<cnt;
    return 0;
}