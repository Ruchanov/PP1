#include<iostream>
using namespace std;

string simple(int n,int b){
    string s;
    cout<<b<<" ";
    if(b==n) return s;
    return simple(n, b+1);
}
int main(){
    string s="";
    int n, b=1;
    cin>>n;
    cout<<simple(n,b);
    return 0;
}