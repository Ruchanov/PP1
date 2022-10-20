#include <iostream>
#include<cmath>

using namespace std;

int main(){
   int n,k;
   cin>>n;
   int x=0;
   while(n!=0){
       cin>>k;
       while(k!=0){
           if(k%10==0) x++; 
            k/=10;
        }
        n--;
    }
   cout<<x;
    return 0;
}