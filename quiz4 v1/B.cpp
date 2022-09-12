#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // multimap<char,char> m;
    // multimap<char,char> :: iterator it;
    // for(int i=0;i<s.size();i++){
    //     m.insert(make_pair(s[i],219-s[i]));
    // }
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(*it).second;
    // }
    for(int i=0;i<s.size();i++){
        s[i]=219-s[i];
    } 
    cout<<s;
    return 0;
}