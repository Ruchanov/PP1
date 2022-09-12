#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    map<string,int> :: iterator it;
    string s;
    int x;
    while(n--){
        cin>>s>>x;
        if(m.find(s)==m.end()) m[s]=x;
        else m[s]=m[s]+x;
    }
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}