#include<iostream>
#include<cmath>
#include<limits.h>

using namespace std;

int main(){
    int n,index, max=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            index=i;
        }
    }
    cout<<index+1;
    return 0;
}