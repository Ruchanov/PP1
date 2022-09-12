#include<iostream>

using namespace std;

bool valid(string s,bool res){
    res=true;
    for(int i=0;i<s.size();i++){
        if(s[i]%2!=0 || s[i]==1){
            res=false;
            break;
        }
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    bool res=valid(s,res);
    if(res==true){
        cout<<"Valid";
    }else{
        cout<<"Not valid";
    }
    return 0;
}