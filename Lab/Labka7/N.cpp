#include<bits/stdc++.h>
using namespace std;
bool res=true;
bool cheater(int a[],int n,int i){
    bool res;
    //int a[n];
    int k;
    //sort(a,a+n);
    if(i==n-2) return res;
    if((a[i]+k)>=a[i+1]){
        res=false;
        return res;
    }        
    return cheater(a,n,i+1);
}
int main(){
    int n,k,i=0;
    bool res;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    res=cheater(a,n,i);
    if(res==true) cout<<"no";
    if(res==false) cout<<"cheater";
    return 0;
}