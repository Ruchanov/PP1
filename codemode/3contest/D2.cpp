#include<bits/stdc++.h>
using namespace std;
char low(char c){
    if(c>64 && c<91){
        c=c-32;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    set<char> ss;
    set<char> iterator :: it;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            s[i]=low(s[i]);
        }
        for(int i=0;i<s.size();i++){
            for(it=ss.begin();it!=ss.end();it++){
                if(s[i]==*it){
                    
                }
            }
        }
    }
}