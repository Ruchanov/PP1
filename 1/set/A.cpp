#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    set <string> ss;
    for(int i=0;i<n;i++){
        cin>>s;
        ss.insert(s);
    }
    cout<<ss.size();
    return 0;
}