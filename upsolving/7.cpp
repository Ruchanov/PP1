#include<iostream>
using namespace std;
int main(){
    int n,a,b,k,l=0,m=0;
    string s,s2;
    cin>>a>>n>>b>>k;
    while(a!=0){
        s+=a%2;
        a=a/2;
    }while(b!=0){
        s2+=b%2;
        b/=2;
    }
    for(int i=0;i<s.size();i++){
        if(i==n){
            l=s[i];
        }
    }for(int i=0;i<s2.size();i++){
        if(i==k){
            m=s2[i];
        }
    }
    if(l==m){
        cout<<"Thunderclap and Flash!";
    }else{
        cout<<"Thunder Breathing... First form...";
    }
    return 0;
}