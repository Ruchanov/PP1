#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==max){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}