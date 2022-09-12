#include<bits/stdc++.h>
using namespace std;
int pl(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++){
        k+=i;
    }
    vector<int> v(k,0);
    for(int i=1;i<=n;i++){
        for(int j=0;j<v.size();j++){
            fill(v.begin()+pl(i),v.end(),i);
        }    
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}