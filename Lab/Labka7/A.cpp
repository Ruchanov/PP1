#include<iostream>
using namespace std;
int dectwo(int a){
    if(a==0) return 1;
    return dectwo(a-1) * 2;
}
int main(){
    int a;
    cin>>a;
    cout<<dectwo(a);
    return 0;
}