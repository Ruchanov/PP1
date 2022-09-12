#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,ev=0,odd=0;
    float a,b;
    vector <int> v;
    while(cin>>x){
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            ev++;
        }else{
            odd++;
        }
    }
    a=(ev/v.size())*100;
    b=(odd/v.size())*100;
    cout<<a<<" "<<b;
    return 0;
}