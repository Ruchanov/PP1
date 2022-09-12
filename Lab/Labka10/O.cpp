#include<bits/stdc++.h>
using namespace std;
string binary(int n){
    string s;
    while(n!=0){
        s+=n%2+48;
        n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<binary(v[i])<<endl;
    }
    return 0;
}