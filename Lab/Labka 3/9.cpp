#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, l, r;
    int k=r;
    cin>>n>>l>>r;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    for(int i=0; i<l-1; ++i){
        cout<<a[i]<<" ";
    }
    for(r;r>=l;r--){
        cout<<a[r-1]<<" ";
    }
    if(n>k){
        for(k;k!=n; k++){
            cout<<a[k]<<" ";
        }
    }

    return 0;
}