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