#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            v2.push_back(a[i]);
        }else{
            v1.push_back(a[i]);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=v2.size()-1;i>=0;i--){
        cout<<v2[i]<<" ";
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}