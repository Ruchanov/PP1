#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    string t;
    cin>>t>>s;
    int cnt=0;
    int f=s.find(t);
    while(f!=string::npos){
        f=s.find(t,f+t.size());
        cnt++;
    }
    if(cnt==s.size()/t.size()){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}