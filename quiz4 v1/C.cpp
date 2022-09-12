#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<"The anagram variants for string "<<s<<" are:"<<endl<<s<<endl;
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<endl;
    }
    return 0;
}