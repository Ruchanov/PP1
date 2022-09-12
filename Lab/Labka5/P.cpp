#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    string t="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>96 && s[i]<122){
            t+=s[i]+1;
        }else if(s[i]==122){
            t+=s[i]-25;
        }
    }
    cout<<t;
    return 0;
}