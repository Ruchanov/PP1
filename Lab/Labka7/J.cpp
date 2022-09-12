#include<iostream>
using namespace std;
//int sum=0;
int heater(string s, int i,int sum){
    if(i==s.size()) return sum;
    sum+=(s[i]-48)/2;
    return heater(s,i+=1,sum); 
}
int main(){
    int i=0,sum=0;
    string s;
    cin>>s;
    cout<<heater(s,i,sum);
    return 0;
} 