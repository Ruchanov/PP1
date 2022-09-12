#include<bits/stdc++.h>
using namespace std;
int count(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]%2==0){
            cnt++;
        }
    }
    return cnt;
}
bool mysort(pair<string,string> &a,pair<string,string> &b){
    if(a.first==b.first){
        return a.second[0]<b.second[0];
    }
    else{
        return a.first<b.first;
    }
}    
int main(){
    int n;
    cin>>n;
    multimap<string,string> m;
    //multimap<string,string> :: iterator it;
    while(n--){
        string s,s2;
        cin>>s>>s2;
        m.insert(make_pair(s,s2));
    }
    vector<pair<string,string>> v(m.begin(),m.end());
    vector<pair<string,string>> :: iterator it;
    sort(v.begin(),v.end(),mysort);
    for(it=v.begin();it!=v.end();it++){
        int x,y;
        x=count((*it).first);
        y=count((*it).second);
        //cout<<x<<" "<<y<<endl;
        if(x==y){
            cout<<(*it).first<<" + "<<(*it).second<<" = LOVE!"<<endl;
        }else{
            cout<<(*it).first<<" + "<<(*it).second<<" = Nu shto ty bratishka pritih?"<<endl;
        }
        // cout<<(*it).first<<" "<<(*it).second<<endl;

    }
    return 0;
}