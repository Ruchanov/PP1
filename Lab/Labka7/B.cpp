#include<iostream>
#include<algorithm>
using namespace std;
string s;
string bin(int n){
    if(n==0) return s;
    s+=n%2 + 48;
    // cout << s << endl;
    return bin(n/2);
}
int main(){
    int n;
    cin>>n;
    string t=bin(n);
    reverse(t.begin(),t.end());
    cout<<t;
    return 0; 
}