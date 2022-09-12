#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=n;j++){
            if(a[i]%a[j]==0){
                break;
            }
        }
    }
}