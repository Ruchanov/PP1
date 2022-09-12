#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=1;
    cin>>n;
    multimap<int,int> m;
    multimap<int,int> :: iterator it;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        m.insert(make_pair(x+y,k));
        k++;
    }
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).second<<" ";
    }
    return 0;
}