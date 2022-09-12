#include<bits/stdc++.h>
using namespace std;
bool res;
char a[6][6];
void dfs(int i, int j,int n, int m){
    // if(i==n-1 && j==m-1)  res=true;
    if(i<0 || i>=n || j<0 || j>=m || a[i][j]=='#' || a[i][j]=='+') return;
    a[i][j]='+';
    dfs(i-1,j,n,m);
    dfs(i+1,j,n,m);
    dfs(i,j-1,n,m);
    dfs(i,j+1,n,m);
}
int main(){
    int n,m;
    cin>>n>>m;
    //char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    dfs(0,0,n,m);
    if(a[n-1][m-1]=='+'){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}