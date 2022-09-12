#include<iostream>

using namespace std;

int main(){
    string s;
    int a[26];
    cin>>s;
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<s.size();i++){
        if(a[s[i]-97]>0){
            cout<<s[i];
        }
        a[s[i]-97]++;
    }
    return 0;
}