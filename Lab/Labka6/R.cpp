#include<iostream>

using namespace std;
char toupper(char a){
    if(a>64 && a<91){
        return a;
    }else{
        return a-=32;
    }
}
int main(){
    char a;
    cin>>a;
    cout<<toupper(a);
    return 0;
}