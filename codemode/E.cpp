#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> v;
    vector<string> :: iterator it;
    string s;
    while(m--){
        cin>>s;
        set<char> ss;
        for(int i=0;i<s.size();i++){
            ss.insert(s[i]);
            if(ss.size()==s.size() || s[i]=='7' || s[i]=='J'){
                v.push_back(s);
            }
        }
    }
    if(v.size()==n){
        cout<<"Jaqs likes it"<<endl;
        for(it=v.begin();it!=v.end();it++){
            cout<<*it<<" ";
        }
    }else{
        cout<<"Jaqs is mad";
    }
    return 0;
}