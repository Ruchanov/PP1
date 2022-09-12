#include<iostream>
#include <string>

using namespace std;

int main(){
    string s,t;
    int cnt=0;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(s.substr(i,j)==t || s==t){
                cnt++;
            }
        }
    }
    if(cnt==0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}    