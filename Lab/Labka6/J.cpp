#include<iostream>

using namespace std;

int max4(int a, int b, int c, int d){
    return max(a,max(b,max(c,d)));
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max;
    max=max4(a,b,c,d);
    cout<<max;
    return 0;
}