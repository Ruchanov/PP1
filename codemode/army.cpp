#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"Ne chetko";
        return 0;
    }
    int a[n][n];
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=x;
        }
        x+=2;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}