#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,x;
    bool res=true;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    x=a[0];
    for(int i=1;i<n;i++){

        x=x^a[i];
    }
    //cout<<x;
    if(x==1){
        cout<<"YES";
        return 0;
    }
    for(int i=0;i<x/2;i++){
        if(pow(2,i)==x){
            res=false;
        }
    }
    if(res==false){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}