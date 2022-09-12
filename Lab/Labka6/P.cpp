#include<iostream>

using namespace std;
void positive_number(int n){
    if(n<0){
        cout<<0-n;
    }else{
        cout<<n;
    }
}
int main(){
    int n;
    cin>>n;
    positive_number(n);
    return 0;
}