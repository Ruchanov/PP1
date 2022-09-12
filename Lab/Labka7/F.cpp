#include<iostream>
using namespace std;
int cnt=0;
int even(string s, int i){
    if(i==s.size()) return cnt;
    if((int(s[i])-48)%2==0) cnt+=1;
    return even(s,i+1);
}
int main(){
    string s;
    int i=0;
    cin>>s;
    cout<<even(s,i);
    return 0;
}