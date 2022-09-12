#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=2*n-1;
    char a[k][k];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            a[i][j]='-';
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(i+j==n-1){
                a[i][j]='a'+n-1;
            }
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
}