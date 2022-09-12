#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int x=0,y=0;
    while(n!=0){
        cin>>k;
        if(k%2==0) {
            x++;
        } else{
            y++;
        }
        n--;

    }
   cout<<x<<" "<<y;
    
   
    return 0;
}