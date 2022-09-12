#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int pos;
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    for(int i=0; i<n-1;++i){
        if(m < a[0]){
            pos = 0;
        }
        if(m > a[n-1]){
            pos = n-1;
        }
        if(m >= a[i] && m < a[i+1]){
            pos = i;
        }

    }
    cout << pos+1;
 
    return 0;
}