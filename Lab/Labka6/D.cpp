#include<iostream>

using namespace std;

int book(int n, int a[], int x, int cnt=0){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n,x, cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    cnt = book(n,a[n],x,cnt);
    if(cnt>0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}