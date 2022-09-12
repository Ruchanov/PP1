#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    bool s=true;
    cin>>n;
    for(int i=2;i<n/2+1;i++){
        if(n==2){
            s=true;
            break;
        }else if(n%i==0){
            s=false;
            break;
        }else{
            s=true;
        }
    }
    if(s==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    
    return 0;
}