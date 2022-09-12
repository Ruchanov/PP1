#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double n, x=0;
    cin>>n;
    for(int k=0; k<=n;k++){
        x=x+(pow(-1,k))/(2k+1);
    }
    cout<<x*4;
   
    return 0;
}