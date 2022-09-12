#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,k,x=1,y=1,m=1;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        x*=i;
    }
    for(int f=1; f<=k; f++){
        y*=f;
    }
    for(int v=1;v<=(n-k);v++){
        m*=v;

    }
    cout<<x/(y*m);
    return 0;
}