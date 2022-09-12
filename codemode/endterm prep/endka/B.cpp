#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> &a, pair<int,int> &b){
    if(a.second==b.second) return a.first>b.first;
    else return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    multimap<int,int> m;
    while(n--){
        int x,y;
        cin>>x>>y;
        m.insert(make_pair(x,y));
    }
    vector<pair<int,int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}