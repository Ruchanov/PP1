#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    map<int,int> m;
    map<int,int> :: iterator it;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=0;
    for(int i=0;i<v.size();i+=2){
        if(v[i+1]-v[i]>max){
            max=v[i+1]-v[i];
            // m.insert(make_pair(v[i],max));
        }
    }
    for(int i=1;i<=v.size();i+=2){
        if(v[i+1]-v[i]==max){
            m.insert(make_pair(v[i],max));
        }
    }

    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}