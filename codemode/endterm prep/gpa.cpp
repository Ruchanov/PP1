#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    multimap<int,string> m;
    multimap<int,string> :: iterator it;
    while(n--){
        string s;
        int k;
        cin>>s>>k;
        while(k--){
            string s2;
            int l;
            cin>>l>>s2;
            m.insert(make_pair(l,s2));
        }
    }
    double sum=0;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second=="A"){
            sum+=4*(*it).first;
        }if((*it).second=="A-"){
            sum+=3.67*(*it).first;
        }if((*it).second=="B+"){
            sum+=3.33*(*it).first;
        }if((*it).second=="B"){
            sum+=3*(*it).first;
        }if((*it).second=="B-"){
            sum+=2.67*(*it).first;
        }if((*it).second=="C+"){
            sum+=2.33*(*it).first;
        }if((*it).second=="C"){
            sum+=2*(*it).first;
        }if((*it).second=="C-"){
            sum+=1.67*(*it).first;
        }if((*it).second=="D+"){
            sum+=1.33*(*it).first;
        }if((*it).second=="D"){
            sum+=1*(*it).first;
        }if((*it).second=="D-"){
            sum+=0.67*(*it).first;
        }if((*it).second=="F"){
            sum+=0*(*it).first;
        }
    }
    int cred=0;
    for(it=m.begin();it!=m.end();it++){
        cred+=(*it).first;
    }
    double f=sum/cred;
    cout<<sum<<" "<<cred<<endl;
    cout<<f;
    return 0;
}