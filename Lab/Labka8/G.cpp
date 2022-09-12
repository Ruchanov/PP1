#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,cnt=0;
    cin>>n;
    bool res;
    vector <int> v;
    vector <int> :: iterator it;
    it=v.begin();
    //vector <int> v2;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    for(it=v.begin();it!=v.end();it++){
        if((*it)>k){
            for(int j=2;j<=(*it)/2;j++){
                if(*it<2){
                    res=false;
                    break;
                }
                if((*it)%j!=0){
                    res=true;
                }else{
                    res=false;
                    break;
                }
            }        
        }
        if(res==true){
            res = false;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}