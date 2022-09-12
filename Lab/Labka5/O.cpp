#include<iostream>
#include<string>
#include<limits.h>
using namespace std;

int main(){
    string s;
    int max=60;
    cin>>s;
    char c;
    for(int i=0;i<s.size();i++){
        if(s[i]>max){
            max=s[i];
        }
    }
    if(max>INT_MIN){
        c=max;
    }
    cout<<c;
    return 0;
}