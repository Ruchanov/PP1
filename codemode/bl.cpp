#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> m;
    map<char,int> :: iterator it;
    for(int i=0;i<s.size();i++){
        if(s[i]>64 && s[i]<91){
            s[i]=s[i]+32;
        }
    }
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int cnt=0;
    for(it=m.begin();it!=m.end();it++){
        if(((*it).first=='p' && (*it).second>=1) || ((*it).first=='a' && (*it).second>=1) || ((*it).first=='c' && (*it).second>=1) ||  ((*it).first=='i' && (*it).second>=2) || ((*it).first=='f' && (*it).second>=1) ||  ((*it).first=='y' && (*it).second>=1) ||  ((*it).first=='w' && (*it).second>=1) ||  ((*it).first=='n' && (*it).second>=1) ||  ((*it).first=='e' && (*it).second>=1)){
            cnt++;
        }
    }
    if(cnt==9){
        cout<<"Bubu";
    }else{
        cout<<"Wine by";
    }
    return 0;
}