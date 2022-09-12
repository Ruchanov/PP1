#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int n,min=INT_MAX,max=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    for(int i=0; i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    for(int i=0; i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max-min-(n-2)-1;
    return 0;
}