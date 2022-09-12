#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<char,int> m;
    map<char,int> :: iterator it;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
    }
    bool res=false;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second>=n){
            cout<<(*it).first<<" ";
            res=true;
        }    
    } 
    if(res==false){
        cout<<"NO COMMON CHARACTERS";
    }  
    return 0;
}