#include<bits/stdc++.h> //неправильно
using namespace std;
int main(){
    int n,x;
    vector<int> v;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int j,k;
    cin>>j>>k;
    for(int i=0;i<v.size()+1;i++){
        if(j==i){
            v[i+1]=v.at(i);
            v[i]=k;
        }
    }
    for (int i=0;i<n+1;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}