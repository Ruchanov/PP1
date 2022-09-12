#include<iostream>

using namespace std;

void percent(float a, float b, float c){
    c=float(b/a)*100;
    cout<<c;
}
int main(){
    int a,b,c;
    cin>>a>>b;
    percent(a,b,c);
    return 0;
}