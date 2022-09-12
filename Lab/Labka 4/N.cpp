#include<iostream>

using namespace std;

int main(){
    int n,k=0;
    cin>>n;
    bool res=true;
    cout<<2<<" is prime"<<endl;
    for(int i = 3; i<n; i++){
        for(int j = 2; j<i;j++){
            if(i%j==0){
                res=false;
                break;
            }else if(i%j!=0){
                res=true;
                k=i;
            }
        }
        if(res==true){
            cout<<k<<" is prime"<<endl;
        }
    }
    return 0;
}