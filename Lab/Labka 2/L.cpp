#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,k;
    cin>>n;
    for(int k=0; k<=n;k++){
        if(pow(2,k)<=n){
            cout<<pow(2,k)<<" ";
        }
    }
    return 0;
}
