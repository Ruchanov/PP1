#include<bits/stdc++.h>
using namespace std;
bool mysort(pair<int,int> &a,pair<int,int> &b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    else{
        return a.first<b.first;
    }
}
int main(){
    int n,x,y;
    cin>>n;
    multimap<int,int> m;
    multimap<int,int>:: iterator it;
    while(n--){
        cin>>x>>y;
        m.insert(make_pair(x,y));
    }
    vector<pair<int,int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),mysort);
    for(int i=0;i<v.size();i++){
        cout<<(v[i]).first<<" "<<(v[i]).second<<endl;
    }
    return 0;
}