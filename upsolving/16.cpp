#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y;
    cin>>d>>m>>y;
    if(d>=1 && d<=31 && m>=1 && m<=12 && y>=1970 && y<=2035){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}