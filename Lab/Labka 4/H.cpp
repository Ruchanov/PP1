#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n,m,k=0,l=0,min=INT_MAX;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            l += a[i][j]; 
        }
        if(l<min){
            min = l;
            k=i+1; 
        }
        l=0;
    }
    cout<<k;
    return 0;
}