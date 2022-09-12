#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n>>c;
    if(c=='b'){
        cout<<n*1024;
    }
    if(c=='k'){
        int m;
        cin>>m;
        //cout<<f;
        cout<<setprecision(m+1)<<(float)n/1024;
    }
    return 0;
}
