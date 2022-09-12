#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int a2[m];
    int a3[n+m];
    for(int j=0;j<m;j++){
        cin>>a2[j];
    }
    for(int i= 0; i < m + n - 1; i++){
        for(int j = i + 1; j< m + n; j++){
            if(a2[j] < a[i]){
                swap(a[i],a2[j]);
                }
            }
        }
    for(int i=0; i<m+n; i++){
        cout<<a3[i]<<" ";
    }
    return 0;
}