#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s="";
    int a[n];
    bool res=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k,cnt=0;
    cin>>k;
    for(int i=0;i<n;i++){
        if(a[i] > k){
            for(int j=2;j<=a[i]/2;j++){
                if(a[i] < 2){
                    res = false;
                    break;
                }
                if(a[i]%j!=0){
                    res=true;
                }
                else{
                    res=false;
                    break;
                }
            }
        }
        if(res==true){
            cnt++;
            res = false;
        }
    }

    cout<<cnt;
    return 0;
}