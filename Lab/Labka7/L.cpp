#include<bits/stdc++.h>
using namespace std;
bool pal(string s, int i, int j){
    bool res;
    if(i>j) return res;
    if(s[i]==s[j]){
        res=true;
    }else{
        res=false;
        return 0;
    }
    return(s,i+1,j-1);
}
int main(){
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    bool res;
    res=pal(s,i,j);
    if(res==true) cout<<"Yes";
    if(res==false) cout<<"No";
    return 0;
}