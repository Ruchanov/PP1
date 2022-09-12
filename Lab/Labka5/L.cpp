#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int cnt = 0,min=64;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>=min){
            min=s[i];
            cnt++;
        }else{
            break;
        }
    }
    if(s.size()==cnt){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}