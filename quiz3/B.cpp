#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    set <string> ss;
    unordered_set <string> us;
    unordered_set<string>:: iterator it;
    for(int i=0;i<n;i++){
        cin>>s;
        if(ss.find(s)==ss.end()){
            ss.insert(s);
        }else{
            us.insert(s);
        }    
    }
    for(it=us.begin(); it!=us.end(); it++){
        cout<<*it<<endl;
    }
    return 0;


}