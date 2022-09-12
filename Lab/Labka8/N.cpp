#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    set<int> ss;
    set<int> :: iterator it;
    for(int i=0; i<n; i++){
        cin>>x;
        ss.insert(x);
    }
    for(it=ss.begin(); it!=ss.end(); it++){
        if(*it%2==1) cout<<*it<<" ";
    }
    return 0;
}