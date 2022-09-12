#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s>>s2;
    //int i=0;
    int cnt=0;
    int i=0;
    if(s.size()!=s2.size()){
        cout<<"Impossible";
        return 0;
    }
    while(s!=s2){
        rotate(s2.begin(),s2.begin()+1,s2.end());
        cnt++;
        if(cnt > s2.size()){
            cout<<"Impossible";
            return 0;
        }
    }
    cout<<cnt;
}