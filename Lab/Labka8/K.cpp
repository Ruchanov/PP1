#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    vector<int> v;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    int sum=0;
    for(int i=v.size()-k;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum;
    return 0;
}