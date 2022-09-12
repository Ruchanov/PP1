#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float n,k;
    cin>>n>>k;
    if(n<=k) {
        cout<<2;
    }else {
        cout<<ceil(n*2/k);
    }
    
    return 0;
}   