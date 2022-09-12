#include<iostream>
using namespace std;
int infinite(){
    int temp;
    cin>>temp;
    if(temp==0) return 0;
    return infinite()+temp;
}
int main(){
    int n;
    int sum=0;
    cout << infinite();
    return 0;
}