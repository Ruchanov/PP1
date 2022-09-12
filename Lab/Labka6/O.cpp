#include<iostream>

using namespace std;
void lucky(string s, int sum, int a){
    sum=0;
    a=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-48;
        a=s[i]-48;
    }
    if(sum%a==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
int main(){
    string s;
    int sum, a;
    cin>>s;
    lucky(s,sum,a);
    return 0;
}