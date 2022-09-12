#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    string a;
    cin>>s;
    int l,r,k;
    cin>>l>>r;
    k=r-l+1;
    a=s.substr(l,k);
    cout<<a;  
    return 0;
}