#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        queue<int> q;
        while(m--){
            string s;
            cin>>s;
            if(s=="Insert"){
                int k;
                cin>>k;
                q.push(k);
            }if(s=="Print"){
                while(!q.empty()){
                    cout<<q.front()<<" ";
                    q.pop();
                }    
            }
            bool res=false;
            if(s=="Delete"){
                int l;
                //bool res==false;
                cin>>l;
                queue<int> qq;
                while(q.front()!=l || !q.empty()){
                    qq.push(q.front());
                    q.pop();
                }if(q.front()==l){
                    q.pop();
                    res=true;
                }
                while(!q.empty()){
                    qq.push(q.front());
                    q.pop();
                }
                if(res==false){
                    cout<<"Doesn't exist"<<endl;
                }
                while(!qq.empty()){
                    q.push(qq.front());
                    qq.pop();
                }
            }
        }    
    }
    return 0;
}