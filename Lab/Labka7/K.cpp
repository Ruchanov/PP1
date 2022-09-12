#include<bits/stdc++.h>
using namespace std;
int maxdigit(string s, int i){
    if(i==s.size()) return 0;
    //if(s[i>max]) max=s[i];
    return max(s.at(i)-48,maxdigit(s,i+1));    
}
int main(){
    int i=0;
    string s;
    cin>>s;
    cout<<maxdigit(s,i);
    return 0;
}