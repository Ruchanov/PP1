#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,n,x=0;
    cin>>a>>n;
    for(int i=0; i<=n; i++){
        x+=pow(a,i);
    }
    cout<<x;
    return 0;
}