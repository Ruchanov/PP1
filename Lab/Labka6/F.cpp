#include<iostream>

using namespace std;

int val(string s, int cnt){
    cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>47 && s[i]<58){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string s;
    cin>>s;
    int cnt;
    int n;
    cin>>n;
    cnt = val(s,cnt);
    if(cnt>=n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}