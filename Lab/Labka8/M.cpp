#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    set<int> ss;
    set<int> :: iterator it;
    for(int i=0; i<n; i++){
        cin>>x;
        ss.insert(x);
    }
    int sum=0;
    for(it=ss.begin(); it!=ss.end(); it++){
        sum+=*it;
    }
    cout<<sum;
    
    return 0;
}