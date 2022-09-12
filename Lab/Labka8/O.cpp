#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> ss;
    set<char> :: iterator it;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if (s[i] > 64 && s[i] < 91) s[i] += 32;
        ss.insert(s[i]);
    }
    cout<<ss.size()<<endl;
    for(it=ss.begin(); it!=ss.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}