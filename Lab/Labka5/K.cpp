#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int cnt=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==97 ||s[i]==101 ||s[i]==105 || s[i]==111 ||s[i]==117){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}