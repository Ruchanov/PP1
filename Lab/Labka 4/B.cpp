#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int n, max=INT_MIN,k=INT_MIN;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>k && a[i][j] < max){
                k=a[i][j];
            }
        }
    }
    if(k==INT_MIN || n==1){
        cout<<0;  
    }else {
        cout<<k;
    }
    return 0;
}