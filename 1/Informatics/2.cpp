#include<iostream>

using namespace std;

int main(){
    char c;
    cin>>c;
    if(int(c)>96 && int(c)<123){
        cout<<char(c-32);
    }else{
        cout<<c;
    }
    return 0;
} 