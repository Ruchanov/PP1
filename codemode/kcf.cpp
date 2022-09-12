#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    map<string,int> :: iterator it;
    queue<string> q;
    while(n--){
        string s;
        int x;
        cin>>s>>x;
        m[s]=x;
    }
    int h=0;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second<h || (*it).second==0){
            q.push((*it).first);
        }else{
        h++; 

        }   
    }
    if(q.empty()){
        cout<<0;
        return 0;
    }
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}