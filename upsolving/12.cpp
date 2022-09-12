#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,c,di,ci,n,f;
    cin>>d>>c>>n;
    cin>>di>>ci;
    f=di*100+ci-(d*100+c)*n;
    if(f<0){
        cout<<-1;
    }else{
        cout<<f/100<<" "<<f%100;
    }    
    return 0;
}