#include <bits/stdc++.h>
using namespace std;
// count the number of appearance
int main(){
    int n;
    cin >> n;
    map<int, int> m;
    map<int, int> :: iterator it;
    int x, y;
    for(int i=0; i<n; i++){
        cin >> x;
        // m[x] = y;
        m[x]++;
    }
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}