#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x;
    map<int,int> m;
    cin>>n>>k;
    while(n--){
        cin>>x;
        m[x]++;
    }
    cout<<m[k];
    return 0;

}