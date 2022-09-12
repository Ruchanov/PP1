#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    if(k>n){
        k=k-n;
    }
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    rotate(v.begin(),v.end()-k,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}