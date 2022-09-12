#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<string> v2;
    //vector<int> :: iterator it;
    //vector<string> :: iterator l;
    while(n--){
        string s;
        int x;
        cin>>s;
        cin>>x;
        v.push_back(x);
        v2.push_back(s);
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<v.size();i++){
        cout<<v2[i]<<" "<<v[i]<<endl;
    }
    return 0;
}