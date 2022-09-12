#include<iostream>

using namespace std;

int main(){
    int x=0,y=0;
    string s, t;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]='F'){
            x++;
        }if(s[i]=='B'){
            x--;
        }if(s[i]=='R'){
            y++;
        }if(s[i]=='L'){
            y--;
        }
    }
    if(y>0){
        cout<<'B';
        y--;
    }
    if(y<0){
        cout<<'F';
        y++;
    }
    if(x>0){
        cout<<'L';
        x--;
    }
    if(x<0){
        cout<<'R';
        x++;
    }
    return 0;
}