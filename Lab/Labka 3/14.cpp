#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<=n-1;++i){
        cin>>a[i];
    }
    long long s;
    for(int i = 0;i<=n-1;++i){
        s=pow(a[i],2);
        cout<<s<<" ";
    }


    return 0;
}