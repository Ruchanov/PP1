#include<bits/stdc++.h>
using namespace std;
// int m(int a[][],int i, int j, int n, int k, int l){
//     if(i==2*n-2 || j==2*n-2 || k==0 || l==0) return 
// }
int main(){
    int n;
    cin>>n;
    int x=n*2-1;
    int a[x][x];
    int a[x/2+1][x/2+1]=1;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            a[i][j]=n;
        }
    }
    // for(int i=0;i<x;i++){
    //     for(int j=0;j<x;j++){
    //         a[i][j]=n;
    //     }
    // }
    // x--;
    // n--;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}