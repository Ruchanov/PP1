#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    string l=s.substr(0,n);
    string k="";
    int cnt=0;
    int sum=0;
    for(int i=n;i<s.size()-n;i+=n){
        k=s.substr(i,n);
        while(next_permutation(k.begin(),k.end())){
            if(k!=l){
                cnt++;
            }
        }
        sum+=cnt;
        cnt=0;
        k="";
    }
    cout<<sum; 
}