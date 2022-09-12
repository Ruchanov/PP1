#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(int(s[i])>96 && int(s[i])<123){
            s[i] -= 32;
        }
    }
     for(int i=0;i<s.size();i++){
    cout<<s[i];
     }
} 