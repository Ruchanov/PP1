#include<iostream>

using namespace std;
bool isdegreeoftwo(float a){
    if(a==0) return false;
    if(a==1) return true;
    isdegreeoftwo(a/2);
}
int main(){
    int a;
    cin>>a;
    isdegreeoftwo(a)? cout<<"Yes" : cout<<"No";
    return 0;
}