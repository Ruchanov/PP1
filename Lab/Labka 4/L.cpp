#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int n,m,min=INT_MAX,k=0,l=0,v=0;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    cout<<"coordinates of min elements:"<<endl;
    for(int j = 0;j < m; j++){
        for(int i = 0; i < n; i++){
            if(a[i][j]<min){
                min=a[i][j];
                k=i+1;
                l= j+1;
            }
        }
        cout<<k<<";"<<l<<endl;
        v+=min;
        min = INT_MAX;
    }
    cout<<"Their sum:"<<endl<<v;
    return 0;
}