#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int n,m,k=0, l=0;
    cin>>n>>m;
    int a[n][m];
     for(int i =  0; i<n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    for(int i =  0; i<n; i++){
        for(int j = 0; j < m; j++){
            k += a[i][j];
        }
        cout<<"The sum of row number "<<i+1<<" is "<<k<<endl; 
        k=0;
    }
    for(int j = 0; j< m; j++){
        for(int i = 0; i < n; i++){
            l+=a[i][j];
        }
        cout<<"The sum of column number "<<j+1<<" is "<<l<<endl;
        l=0;
    }
    return 0;
}