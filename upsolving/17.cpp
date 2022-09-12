#include<iostream>
using namespace std;
int main(){
    int n,m,b;
    float per;
    cin>>n>>m>>b;
    per=(n+m)*0.1;
    cout<<per;
    if(per>n){
        cout<<"You are my sweet baby";
    }else{
        cout<<"Boris, you are punished!";
    }
    return 0;
}