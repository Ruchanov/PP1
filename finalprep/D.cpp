#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v;
    string k="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='.'){
            k+=s[i];
        }if(s[i]=='.'){
            v.push_back(stoi(k));
            k="";
        }if(i==s.size()-1){
            v.push_back(stoi(k));
            k="";
        }
    }
    bool res=true;
    for(int i=0;i<v.size();i++){
        if(v[i]>=0 && v[i]<=255){
            res=true;
        }else{
            res=false;
            break;
        }
    }
    if(res==true){
        cout<<"1";
    }else{
        cout<<"0";
    }
    return 0;
}