#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string s;
    cin>>s;
    string t="";
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>47 && s[i]<58){
            t+=s[i];
        }
    }
    cout<<t;
    return 0;
}