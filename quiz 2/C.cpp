#include<iostream>
#include<limits.h>

using namespace std;
int main(){
    int n;
    int max=0;
    cin>>n;
    int cnt=0;
    int a[n], b[1001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<1001;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    for(int i=1000;i>0;i++){
        if(b[i]>max){
            max=b[i];
        }else if(b[i]==max){
            cout<<i<<" ";
        }
    }
    cout<<max;
    return 0;
}