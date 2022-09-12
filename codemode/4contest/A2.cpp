#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    cin>>s>>c;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            s[i]='0';
        }
    }
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            for(int j=i;j<s.size();j++){
                s[j]=cnt+48;
                cnt++;
            }
            for(int j=i;j>=0;j--){
                s[j]=cnt+48;
                cnt++;
            }
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}