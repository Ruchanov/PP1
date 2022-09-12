#include<bits/stdc++.h>
using namespace std;
bool isprime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
vector<int> prime (int n){
    vector <int> v;
    int k=2;
    while(v.size()<n){
        if(isprime(k)) v.push_back(k);
        k++;
    }
    return v;
}
int main(){
        int n;
        cin>>n;
        vector <int> v=prime(n);
        cout<<v[v.size()-1];
        return 0;
    }