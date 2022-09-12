#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int> v;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            j=i;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=max || i!=j){
            v.push_back(a[i]);
        }
    }
    int max2=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max2){
            max2=v[i];
        }
    }
    cout<<max*max2;
    return 0;
}