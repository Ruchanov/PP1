#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n][k];
    map<int,int> m;
    map<int,int> :: iterator it;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(a[i][j]>=0){
                cnt++;
            }
            m[i]=cnt;
        }
        cnt=0;
    }
    int max=0,min=INT_MAX;
    for(it=m.begin();it!=m.end();it++){
        if((*it).second>max){
            max=(*it).second;
        }if((*it).second<min){
            min=(*it).second;
        }
    }
    if(max==min){
        cout<<"Numbers are equal";
        return 0;
    }
    for(it=m.begin();it!=m.end();it++){
        if((*it).second==max){
            cout<<(*it).first+1;
        }
    }
    return 0;
}