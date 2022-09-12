#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    map<string, string> m1;
    int n;
    cin >> n;
    string l1, p1;
    while(n--){
        cin >> l1 >> p1;
        m1.insert(make_pair(l1, p1));
    }

    int k;
    string l2, p2;
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> l2 >> p2;
        if(m1.find(l2) == m1.end()) cout << "login error" << endl;
        else if(m1[l2] != p2) cout << "password error" << endl;
        else cout << "correct password" << endl;
    }
    return 0;
}