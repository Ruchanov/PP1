#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2="";
    cin>>s;
    map<char,int> m;
    map<char,int> :: iterator it;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int max=0;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second>max){
            max=(*it).second;
        }
    }
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==max){
            m.erase(it);
        }
    }
//    for(it=m.begin();it!=m.end();it++){
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//     }
    for(it=m.begin();it!=m.end();it++){
        s2+=(*it).first;
    }
    if(s2==""){
        cout<<"All gone!";
    }else{
        cout<<s2;
    }
    return 0;
}