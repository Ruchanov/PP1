#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    string t="";
    string k="";
    cin>>s;
    t=s+s[0];
    for(int i=t.size()-1;i>=0;--i){
        k+=t[i];
    }
    if(t==k){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}