#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<char,int> m;
    map<char,int> :: iterator it;
    for(char i='a';i<='z';i++){
        m.insert(make_pair(i,0));
    }
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
    }
    string s2="";
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==0){
            s2+=(*it).first;
        }
    }
    if(s2==""){
        cout<<"No such characters";
    }else{
        cout<<s2;
    }
    return 0;
}