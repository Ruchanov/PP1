#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    vector<int> v(max,max);
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i];j++){
            v[j]=a[i];
        }     
    }
    set<int> ss;
    set<int> :: iterator it;
    for(int i=0;i<v.size();i++){
        ss.insert(v[i]);
    }
    cout<<ss.size();
}