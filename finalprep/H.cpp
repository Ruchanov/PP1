#include<bits/stdc++.h>
using namespace std;
bool res;
bool vis(int y){
    if(y%400==0 || (y%100!=0 && y%4==0)) res=true;
    else res=false;
    return  res;
}
int main(){
    int d,n,y;
    cin>>d>>n>>y;
    map<int,int> m;
    m[1]=31;
    m[2]=28;
    m[3]=31;
    m[4]=30;
    m[5]=31;
    m[6]=30;
    m[7]=31;
    m[8]=31;
    m[9]=30;
    m[10]=31;
    m[11]=30;
    m[12]=31;
    bool res=vis(y);
    if(res==true){
        m[2]=29;
        if(m.at(n)>d){
            cout<<d+1<<" "<<n<<" "<<y;
        }if(m.at(n)==d && n+1<=12){
            cout<<"1"<<" "<<n+1<<" "<<y;
        }if(m.at(n)==d && n+1>12){
            cout<<"1"<<" "<<n+1-12<<" "<<y+1;
        }
    }else{
        if(m.at(n)>d){
            cout<<d+1<<" "<<n<<" "<<y;
        }if(m.at(n)==d && n+1<=12){
            cout<<"1"<<" "<<n+1<<" "<<y;
        }if(m.at(n)==d && n+1>12){
            cout<<"1"<<" "<<n+1-12<<" "<<y+1;
        }
    }        
    return 0;    
    
}