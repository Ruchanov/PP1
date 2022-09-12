#include<bits/stdc++.h>
using namespace std;
bool sort(int x){

} 
int main(){
    int n;
    cin>>n;
    vector<int> v,v2;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bool res=true;
    sort(v.begin(),v.end());
    while(next_permutation(v.begin(),v.end())){
        for(int j=v.size()-1;j>=0;j--){
            v2.push_back(v[j]);
        } 
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v2.size();j++){
                if(v[i]!=v[j]){
                    res=false;
                    break;
                }
            }
        }
        cout<<res;
        if(res==true){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }    
            return 0;
        }
        v2.empty(); 
    }
    cout<<"Impossible";
    return 0;
}