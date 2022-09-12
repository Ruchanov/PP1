#include<iostream>
#include<limits.h>

using namespace std;
int main(){
    int b[10];
    string s;
    cin>>s;
    for(int i=0;i<10;i++){
        b[i]=0;
    }
    for(int i=0;i<s.size();i++){
        b[s[i]-48]++;
    }
    for(int i=0; i<10;i++){
        if(b[i]!=0){
            cout<<i<<": "<<b[i]<<endl;
        }
    }
    return 0;
}