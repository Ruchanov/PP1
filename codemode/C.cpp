#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c;
    stack<int> s;
    while(n--){
        cin>>c;
        if(c>48 && c<58){
            s.push(c-48);
        }if(c=='C'){
            s.pop();
        }if(c=='+'){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            s.push(y);
            s.push(x);
            s.push(x+y);
        }if(c=='D'){
            int k=s.top();
            s.push(2*k);
        }
    }
    int sum=0;
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }
    cout<<sum;
    return 0;
}