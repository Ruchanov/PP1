#include<iostream>
#include<limits.h>

using namespace std;

int main(){

    int n, maxi=INT_MIN, c=-1, b=-1;
    cin>>n;
    int a[n][n];
    for(int i=0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > maxi){
                maxi = a[i][j];
                c = i+1;
                b = j+1;
            }
        }
    }
    cout<<c<<" "<<b;
    return 0;
}