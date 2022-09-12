#include<iostream>

using namespace std;

void a(bool res, string s,string k,string n){
    for(int i=0;i<s.size();i++){
        for(int j=0;j<k.size();j++){
            if(s[i]==k[j]){
                res=false;
            }
        }
        if(res==true){
            n+=s[i];
        }if(res==false){
            res = true;
        }
    }
    cout<<n;
}
int main(){
    string s;
    getline(cin,s);
    string n="";
    string k="AEIOUaeiou";
    bool res=true;
    a(res,s,k,n);
    return 0;
}