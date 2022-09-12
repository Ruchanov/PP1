#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    map<string,int> m;
    map<string,int> :: iterator it;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m.insert(make_pair(a[i],i+1));
    }
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}