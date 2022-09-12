#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n=0, x=1;
    cin>>n;
    for(int k=1;k<=n;k++ ){
        x*=k;
    }
    cout<<x;
    return 0;
}