#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,t,a;
    cin>>p>>t>>a;
    vector<int> v;
    while(a--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]/t>10){
            cnt+=10;
        }else{
            cnt+=v[i]/t;
        }    
    }
    if(cnt>=p){
        cout<<"Stipuha est' - mozhno poest'"<<endl<<cnt;
    }else{
        cout<<"Voronkov chert!"<<endl<<cnt;
    }
    return 0;
}