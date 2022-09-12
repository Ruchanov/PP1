#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<"Odd";
    }else if(n==0){
        cout<<"None";
    }else {
        cout<<"Even";
    }
    return 0;
}   