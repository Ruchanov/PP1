#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int n;
    char s='.';
    char k='*';
    cin>>n;
    int m=2*n-1;
    string a[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
           if(i+j<n-1 || i<j-n+1){
               a[i][j]=s;
            }else {
                a[i][j]=k;
            } 
            
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}