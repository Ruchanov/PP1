#include<bits/stdc++.h>
using namespace std;

string toBin(int a){
    if (a == 0) return "";
    return toBin(a / 2) + char((a % 2) + 48);
}

int zeros(string s){
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == '1') cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    cout << "0,";
    for(int i = 1; i <= n; ++i){
        cout << zeros(toBin(i));
        if (i != n) cout << ',';
    }

    return 0;
}