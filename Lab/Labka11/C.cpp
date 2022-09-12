#include<bits/stdc++.h>

using namespace std;
bool comp(pair<string,double> &a, pair<string,double> &b){
    if(a.second==b.second){
        return a.first>b.first;
    }else return a.second>b.second;
}

int main(){
    int n;
    cin>>n;
    map<string,double> m;
    map<string,double> :: iterator it;
    while(n--){
        string s;
        int x;
        cin>>s>>x;
        if(m.find(s)!=m.end()) m[s]=m[s]+x;
        else m[s]=x; 
    }
    int sum=0;
    for(it=m.begin();it!=m.end();it++){
        sum+=(*it).second;
    }
    for(it=m.begin();it!=m.end();it++){
        (*it).second=((*it).second/sum)*100;
    }
    vector<pair<string,double>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<"%"<<endl;
    }
    return 0;
}