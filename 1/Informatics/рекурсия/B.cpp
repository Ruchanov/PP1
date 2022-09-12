#include<iostream>
#include<cmath>
using namespace std;
int max=0
int digit(string s,int i){
    //int max=0;
    if(i==s.size()) return max;
    if(s[i]>max) max=s[i];
    digit(s,i+=1);
}
int main(){
    string s;
    int i=0;
    cin>>s;
    cout<<digit(s,i);
    return 0;
}