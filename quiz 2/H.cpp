#include<iostream>

using namespace std;

int main(){
    string s;
    char k;
    cin>>k>>s;
    string n="";
    for(int i=0; i<s.size();i++){
        if(s[i]!=k){
            n+=s[i];
        }
    }
    cout<<n;
    return 0;
}