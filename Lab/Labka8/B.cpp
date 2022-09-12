#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}
