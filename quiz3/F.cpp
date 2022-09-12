#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0){
        n=n/isprime(n);
        if(n%isprime(n)==0) cout<<isprime(n)<<" ";
    }
    return 0;
}