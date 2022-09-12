#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,k,p;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k>>p;
    reverse(v.begin()+k,v.begin()+p+1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;

}