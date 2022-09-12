#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //int a[n];
    vector<int> v,v2;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]){
                break;
            }if(j==v.size()-1 && v[i]!=v[j]){
            v2.push_back(v[i]);
            }
        }
    }
    for(int i=v2.size()-1;i>=0;i--){
        cout<<v2[i]<<" ";
    }
    return 0;

}