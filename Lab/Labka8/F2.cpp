#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n,x;
    vector<int> v;
    vector<int> :: iterator it;
    it=v.begin();  
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int j,k;
    cin>>j>>k;
    v.insert(v.begin()+j,k);
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}