#include<iostream>
using namespace  std;
int main(){
    int n,sum0=0,sum1=0;
    cin>>n;
    string s,s2;
    while(n!=0){
        s+=n%2;
        n/=2;
    }
    for(int i=s.size()-1;i>=0;--i){
        s2+=s[i]+48;
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]==48){
            sum0+=1;
        }if(s2[i]==49){
            sum1+=1;
        }
    }
    cout<<s2<<endl<<"zeros "<<sum0<<endl<<"number of units "<<sum1;
    return 0;
}