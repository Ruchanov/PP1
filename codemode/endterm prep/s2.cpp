#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> m;
    map<char,int> :: iterator it;
    int max=0;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(it=m.begin();it!=m.end();it++){
        if((*it).second>max){
            max=(*it).second;
        }
    }
    string s2="";
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==max){
            s2+=(*it).first;
        }
    }
    for(int i=0;i<s2.size();i++){
        ifs.find(s2[i])
    }
    return 0;
}