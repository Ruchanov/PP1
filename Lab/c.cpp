// SortMapByValue
#include <bits/stdc++.h>
using namespace std;

bool MySort(pair<int, int> &a, pair<int, int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    multimap<int, int> m;
    multimap<int, int> :: iterator it;
    int x, y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        m.insert(make_pair(x, y));
    }
    vector<pair<int, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), MySort);

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}