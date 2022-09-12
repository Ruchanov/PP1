#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v,v2,v3;
    map<int,int> m;
    map<int,int> :: iterator it;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==1){
            v2.push_back((*it).first);
        }
        if((*it).second>1){
            v3.push_back((*it).first);
        }
    }
    if(v2.size()==0){
        cout<<"Zvonite mamam, u vas retake"<<endl;
    }
    if(v2.size()>0){
        cout<<"}{orishie : ";
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
    if(v3.size()==0){
        cout<<"Molodcy"<<endl;
    }
    if(v3.size()>0){
        cout<<"Plo}{ie : ";
        for(int i=0;i<v3.size();i++){
            cout<<v3[i]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}