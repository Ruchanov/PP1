#include<iostream>

using namespace std;
int sum_digits(string s,int sum){
    sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-48;
    }
    return sum;
}
int main(){
    int a;
    string s;
    cin>>s;
    a=sum_digits(s,a);
    cout<<a;
    return 0;
}