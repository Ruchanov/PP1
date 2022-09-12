#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,k;
    cin>>n;
    for(int k=1; k<=n;k++){
        if(pow(k,2)<=n){
            cout<<pow(k,2)<<endl;
        }
    }
    return 0;
}
