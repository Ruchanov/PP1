#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double n,res=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        res+=1/pow(i,2);
    }
    cout<<res;
    
    return 0;
}