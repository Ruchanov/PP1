#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="wine",s2="pacify",s3;
    set<char> st;
    set<char> :: iterator it;
    cin>>s3;
    for(int i=0;i<s3.size();i++){
        if(s3[i]>64 && s3[i]<91){
            s3[i]=s3[i]+32;
        }
        st.insert(s3[i]);
    }
    int cnt=0,n=0,cnt2=0;
    for(int i=0;i<s.size();i++){
        for(it=st.begin();it!=st.end();it++){
            if(s[i]==(*it)){
                cnt++;
            }
            st.erase(*it);
        }
    }
    if(cnt==s.size()){
        n++;
    }
    for(int i=0;i<s2.size();i++){
        for(it=st.begin();it!=st.end();it++){
            if(s2[i]==(*it)){
                cnt2++;
            }
            st.erase(*it);
        }
    }
    if(cnt2==s2.size()){
        n++;
    }
    if(n==2){
        cout<<"Bubu";
    }else{
        cout<<"Wine by";
    }
    return 0;
}