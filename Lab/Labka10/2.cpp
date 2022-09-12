#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s={6,5,4,3,2,4,523};
    set<int> :: iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";
    }
    return 0;
}