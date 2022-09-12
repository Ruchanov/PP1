#include<bits/stdc++.h>
using namespace std;
int main(){
    int d;
    cin>>d;
    map<string,double> m;
    map<string,double> :: iterator it;
    while(d--){
        int n;
        cin>>n;
        while(n--){
            double a;
            string s;
            cin>>s>>a;
        if(m.find(s)==m.end()) m[s]=a;
        else m[s]=m[s]+a;
        }
    }
    int sum=0;
    for(it=m.begin();it!=m.end();it++){
        sum+=(*it).second;
    }
    for(it=m.begin();it!=m.end();it++){
        (*it).second=((*it).second/sum)*100;
    }
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;

}