#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    int max=INT_MIN, min=INT_MAX;
    vector<int> v;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>max) max=v[i];
        if(v[i]<min) min=v[i];
    }
    cout<<max-min;
    return 0;
}