#include<iostream>
using namespace std;

bool get(int a){
    if(a==1) return true;
    if(a<1) return false;
    get(a-3) || get(a-5);
}
int main(){
    int a;
    cin>>a;
    get(a) ? cout<<"Yes" : cout<<"No";
    return 0;
}