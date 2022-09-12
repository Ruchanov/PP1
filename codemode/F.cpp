#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cnt=0,d=14;
    string s,s2;
    queue<string>q,q2;
    cin>>n; 
    while(n--){
        cin>>s;
        q.push(s);
    }
    cin>>m;
    while(m--){
        cin>>s;
        q2.push(s);
    }
    while(!q2.empty() && d!=0){
        if(q.front()==q2.front()){
            q.pop();
            q2.pop();
        }
        else{
            s2=q.front();
            q.pop();
            q.push(s2);
        }
        cnt++;
        d--;
        if(d==0){
            cout<<"Shara is crying((";
            return 0;
        }
    }
    cout<<"Shara is dovolen in:"<<cnt;
    return 0;
}