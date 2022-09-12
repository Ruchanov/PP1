#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    map<char,int> m;
    map<char,int> :: iterator it;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(it=m.begin();it!=m.end();it++){
        if((*it).second>26) (*it).second=(*it).second%26;
        char c='a'+(*it).second;
        cout<<(*it).first<<c;
    }
    return 0;
}