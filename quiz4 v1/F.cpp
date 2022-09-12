#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0,max=0;
    string s,k,l;
    cin>>s;
    for(int i=0;i<s.size();i++){
        while(s[i]!=' '){
            k+=s[i];
            sum+=s[i];
        }
        if(s[i]==' '){
            if(max<sum){
                max=sum;
                l=k;
            }    
            k="";
            sum=0;
        }
    }
    cout<<l;
    return 0;    
}