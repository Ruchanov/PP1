#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;    
    int sum=0;
    int cnt=0;
    while(s.size()>1){
        for(int i=0;i<s.size();i++){
            sum+=s[i]-48;
        }
        s=to_string(sum);
        sum=0;
        cnt++;
    }
    if(s.size()==1){
        cout<<s<<" "<<cnt;
        return 0;
    }
}