#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n,m,index=0,sum=0,min=INT_MAX;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            sum += a[i][j]; 
        }
        if(sum<min){
            min = sum;
            index = i+1; 
        }
        sum=0;
    }
    cout<<index;
    return 0;
}