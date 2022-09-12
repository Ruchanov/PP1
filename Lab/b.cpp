#include <bits/stdc++.h>
using namespace std;
// count the number of appearance
int main(){
    int n;
    cin >> n;
    multimap<int, int> m;
    multimap<int, int> :: iterator it;
    int x, y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        m.insert(make_pair(x, y));
    }
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}