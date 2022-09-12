#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    multimap<string,string> m;
    multimap<string,string> :: iterator it;
    vector <string> v;
    while(n--){
        string s,a;
        cin>>s;
        int l;
        cin>>l;
        while(l--){
            cin>>a;
            m.insert(make_pair( s, a));
        }
    }
    int k;
    cin>>k;
    while(k--){
        string c;
        cin>>c;
        v.push_back(c);
    }
    for(int i=0;i<v.size();i++){
        bool res=true;
        for(it=m.begin();it!=m.end();it++){
            if(v[i]==(*it).second){
                cout<<(*it).first<<endl;
                res=false;
            }
        }
        if(res!=false){
            cout<<"Ondai joq"<<endl;
        }
    }
    return 0;

}