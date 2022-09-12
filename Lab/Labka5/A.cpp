#include<iostream>

using namespace std;

int main(){
    int n=0,m=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){ //s.size()-размер стринга
        if(int(s[i])>64 && int(s[i])<91){
            n++;
        }else if(int(s[i])>96 && int(s[i])<123){
            m++;
        }
    }
    cout<<m<<" "<<n;

} 