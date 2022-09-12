#include<iostream>
#include<limits.h>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int MaxV=INT_MIN;
    int MinV=INT_MAX;

    for(int i=0;i<n;++i){
        cin>>a[i];
        MinV=min(MinV,a[i]);
        MaxV=max(MaxV,a[i]);
    }
    for(int i=0; i<n;++i){
        if(a[i]==MaxV){
            a[i]=MinV;
        }
        cout<<a[i]<<" ";
    }    
        

   return 0;
}