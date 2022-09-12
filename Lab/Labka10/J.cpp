#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>  v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    rotate(v.begin(),v.begin()+m,v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
