#include<iostream>

using namespace std;
int a=0;
int sum(string s,int i){
    if(i==s.size()) return a;
    //a+=s[i];
    a+=int(s[i]-48);
    return sum(s, i+1);
}
int main(){
    int i=0;
    string s;
    cin>>s;
    cout<<sum(s,i);
    return 0;
}