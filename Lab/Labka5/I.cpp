#include<iostream>
#include<string>

using namespace std;

int main(){
    int sums=0,sumt=0;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        sums+=s[i];
    }
    cout<<sums;
    for(int i=0;i<t.size();i++){
        sumt+=t[i];
    }
    if(sums==sumt){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}