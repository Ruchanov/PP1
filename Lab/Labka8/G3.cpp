#include<bits/stdc++.h>
using namespace std;
bool res=true;
bool prime1(int a[],int n, int i,int j){
    if(i==n) return res;
    if(j==a[i]/2) return res;
    if(a[i]%j==0) return false;
    return prime1(a,n,i+1,j+1);
}
bool prime(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=2;j<a[i]/2;j++){
            if(a[i]%j==0){
                res=false;
                return res;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    bool res;
    res=prime(a,n);
    if(res==true;)   
    return 0;
}