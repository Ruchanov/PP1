#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    if(n<60*24){
        cout<<n/60 ;
    }else{
        cout<<n/60-24;
    }
    return 0;
}   