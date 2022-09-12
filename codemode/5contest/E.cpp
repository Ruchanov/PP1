#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    a[0]=0,a[1]=1;
    for(int i=2;i<1000;i++){
        a[i]=a[i-1]+a[i-2];
        if(a[i]==n){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}