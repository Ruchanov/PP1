#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int k;
    queue<string> q;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k==1){
            cin>>s;
            q.push(s);
            cout<<q.front()<<endl;
        }else{
            q.pop();
            if(q.empty()){
                cout<<"queue is empty"<<endl;
            }else{
                cout<<q.front()<<endl;
            }    
        }
    }
    return 0;
}