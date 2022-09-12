#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> v={'A','r','u','z','h','a','n','c','h','i','k'};
    vector<char> v2(11,'*');
    //vector<char> :: iterator it;
    /*for(it=v2.begin();it<v2.end();it++){
        cout<<*it;
    }*/
    cout<<"Komu Yaslan hochet pozhelat sladkix snov?"<<endl;
    char c;
    int n=10;
    int i=0;
    while(n!=0 && v!=v2){
        cin>>c;
        for(int i=0;i<v.size();i++){
            if(v[i]==c){
                v2[i]=v[i];
            }    
        }
        for(int i=0;i<v2.size();i++){
            cout<<v2[i];
        }
        cout<<endl;
        if(v2==v){
            cout<<"pobedila! Sladkih snov tebe ot Yaslana";
            return 0;
        }else if(n==0 && v!=v2){
            cout<<"proigrala(";
            return 0;
        }
        n--;
        cout<<"Kolichestvo popytok:"<<n<<endl;
    }   
    return 0;
}