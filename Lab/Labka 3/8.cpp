#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int a[n];
    for(int i=0; i<n;++i){
        cin>>a[i];
    }
    long long s=0;
    for(int i = l - 1; i < r; ++i){
        s+=a[i];
    }
    cout<<s;
   


    return 0;
}