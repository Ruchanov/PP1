#include<iostream>

using namespace std;

int main(){
    string s;
    bool res=true;
    int t=10,b=0;
    int a[t];
    cin>>s;
    for(int i=0;i<t;i++){
        a[i]=0;
    }
    for(int i=0;i<s.size();i++){
        a[s[i]-48]++;
    }
    for(int i=0;i<t;i++){
        if(a[0]==a[i]){
            res=true;
        }else{
            res=false;
        }
    }
    if(res==true){
        cout<<"YES";
    }
    if(res==false){
        cout<<"NO";
    }

    return 0;
}