#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int n,max=INT_MIN,k=0,l=0;
    cin>>n;
    int a[n][n];
    for(int i =  0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i =  0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j && max<a[i][j]){
                max=a[i][j];
                k=i+1;
                l=j+1;
            }
        }
    }
    cout<<"Maximum element is: "<<max<<" with coordinates: "<<k<<";"<<l;
        
    return 0;
}