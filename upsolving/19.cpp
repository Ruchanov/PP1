#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(i/10==5 || i%10==5){
            cout<<i<<" ";
        }
    }
    return 0;
}