#include<iostream>
#include<string>

using namespace std;

int main(){
    string N;
    int a=0;
    int b=0;
    cin>>N;
    for(int i=0;i<N.size();i+=2){
        a+=N[i];
    }
    for(int i=1;i<N.size();i+=2){
        b+=N[i];
    }
    if(a==b){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}