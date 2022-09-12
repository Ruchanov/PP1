#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool res;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n); сортирует массив по возврастанию
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}