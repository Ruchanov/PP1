#include<iostream>
#include <string>

using namespace std;

int main(){
    string s;
    string k="";
    cin>>s;
    for(int i=s.size()-1;i>=0;--i){
        k+=s[i];
    }
    if(k==s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
} 