#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v,v2;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=v.size()-1;i>=0;i--){
        v2.push_back(v[i]);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=v2[i]) cout<<"Instead of "<<v[
            i]<<" here was "<<v2[i]<<endl;
        else cout<<"OK"<<endl;
    }
    return 0;
}