#include<bits/stdc++.h>
using namespace std;
/*int xor(int n, int m){
    return n^m;
}*/
int super(int n, int m){
    return n^(m^(n+m));
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<super(n,m);
    return 0;
}