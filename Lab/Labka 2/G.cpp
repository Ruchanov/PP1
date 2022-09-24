#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, max=INT_MIN;
    cin>>n;
    int x;
    while(n!=0){
        cin >> x;
        if(x>max){
            max = x;
        }
        n--;
    }
    cout << max;
    return 0;
}
int a[];
fro(int i = 0;i< n;i++){
    cin>>a[i];
}
fro(int i = 0;i<n;i++){
    if(a[i]>max){
        max = a[i];
    }
}