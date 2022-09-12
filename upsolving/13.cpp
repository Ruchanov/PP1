#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    bool res=true;
    cin>>n>>k;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            res=false;
            break;
        }
    }
    if(res==true && n<500 && k%2==0){
        cout<<"Good job!";
    }else{
        cout<<"Try next time!";
    }
}