#include<iostream>

using namespace std;

void capital_even(string s){
    for(int i=0;i<s.size();i+=2){
        if(s[i]>96 && s[i]<123){
            s[i]=s[i]-32;
        }    
    }
    cout<<s;
}
int main(){
    string s;
    cin>>s;
    capital_even(s);
    return 0;
}