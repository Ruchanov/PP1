#include<bits/stdc++.h>
using namespace std;
char low(char c){
    if(c>64 && c<91){
        c=c+32;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    map<char,int> m;
    map<char,int> :: iterator it2;
    set<char> ss;
    set<char> :: iterator it;
    //vector<string> v;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            s[i]=low(s[i]);
        }
        for(int i=0;i<s.size();i++){
            ss.insert(s[i]);
        }
        for(int i=0;i<s.size();i++){
            for(it=ss.begin();it!=ss.end();it++){
                if(s[i]==*it){
                    m[s[i]]++;
                }
            }
        }
        ss.clear();
    }
    int cnt=0;
    for(it2=m.begin();it2!=m.end();it2++){
        cnt++;
    }
    if(cnt==0){
        cout<<"No common characters";
        return 0;
    }
    for(it2=m.begin();it2!=m.end();it2++){
        cout<<(*it2).first<<" ";
    }
    return 0;
}