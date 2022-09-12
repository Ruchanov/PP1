#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s,s2;
    while(n!=0){
        s+=(n%2)+48;
        n=n/2;
    }
    for(int i=s.size()-1;i>=0;i--){
        s2+=s[i];
    }
    if(s==s2){
        cout<<"It works!";
    }else{
        cout<<"Sad";
    }
    return 0;
}