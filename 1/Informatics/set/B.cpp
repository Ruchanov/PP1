#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x,n;
    cin>>n;
    set <int> ss;
    string s;
    //cin>>s>>x;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="ADD"){
            cin>>x;
            ss.insert(x);
        }
        if(s=="PRESENT"){
            cin>>x;
            if(ss.find(x) == ss.end()){
                cout<<"NO"<<endl;
            }    
            else{
                cout<<"YES"<<endl;
            }
        }
        if(s=="COUNT"){
            cout<<ss.size()<<endl;
        }
    }    
    return 0;
}