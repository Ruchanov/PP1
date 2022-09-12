#include<iostream>
using namespace std;
 int fibo(int a){
    if(a==1) return 0;
    if(a==2) return 1;
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int a;
    cin>>a;
    cout<<fibo(a);
    return 0;
}