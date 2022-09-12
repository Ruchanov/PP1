#include<bits/stdc++.h>
using namespace std;
int fibo(int a){
    if(a==1) return 0;
    if(a==2) return 1;
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++){
        int x;
        x=fibo(i);
        if(x>9){
            x=x%10;
        }
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}