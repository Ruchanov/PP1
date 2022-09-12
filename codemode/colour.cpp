#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,vector<int>> m;
    map<string,vector<int>> :: iterator it;
    while(n--){
        string s;
        vector<int> v;
        cin>>s;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        m.insert(make_pair(s,v));
    }for(it=m.begin();it!=m.end();it++){
        string c=(*it).first;
        int m=0;
        if(c.size()%2==0){
            for(int i=0;i<(*it).second.size();i++){
                m+=(*it).second[i];
                
            }
            m=m/3;
            for(int i=0;i<(*it).second.size();i++){
                (*it).second[i]+=m;
            }
        }else{
            for(int i=0;i<(*it).second.size();i++){
                m+=(*it).second[i];
                
            }
            m=m/3;
            for(int i=0;i<(*it).second.size();i++){
                (*it).second[i]-=m;
                if((*it).second[i]<0) (*it).second[i]=0;
            }
        }

    }
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<": "<<(*it).second<<endl;
    }
    return 0;
}