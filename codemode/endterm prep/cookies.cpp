#include<iostream>
using namespace std;
int m=0;
int maxi(int a[],int n, int i){
    if(i==n) return m;
    //else return maxi(a,n,i+1);
    if(a[i]>=m){
        m=a[i];
    }
    return maxi(a,n,i+1);
}
int main(){
    int n;
    //int max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int x=maxi(a,n,i);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}