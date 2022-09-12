#include <iostream>
#include<cmath>

using namespace std;

int main(){
   int n,k;
   cin>>n;
   int x=0;
   while(n!=0){
       cin>>k;
       if(k%10==7){
           x++;
       }

       n--;
   }
   cout<<x;
    return 0;
}