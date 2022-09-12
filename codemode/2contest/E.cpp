#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2="";
    cin>>s;
    int n;
    cin>>n;
    //vector<string> v;
    for(int i=0;i<s.size();i++){
        while(i<n){
            s2+=s[i];
        }
    }
    string k="";
    int cnt=0;
    int sum=0;
    for(int i=n-1;i<s.size();i++){
        if(i%n){
            k+=s[i];
        }
        while(next_permutation(s2.begin(),s2.end())){
            while(s2!=k){
                cnt++;
            }    
        }
        sum+=cnt;
        cnt=0;
        k="";
    }
    cout<<sum;
    return 0;
}