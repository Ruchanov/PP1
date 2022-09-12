#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
void hypo(int a, int b){
    cout<<setprecision(4)<<sqrt(pow(a,2)+pow(b,2));
}
int main(){
    int a,b;
    cin>>a>>b;
    hypo(a,b);
    return 0;
}