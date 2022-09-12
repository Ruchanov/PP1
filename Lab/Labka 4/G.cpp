#include<iostream>

using namespace std;

int main(){
    int n;
    int cnt = 1;
    cin>>n;
    char s = '.';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j ==(n - 1)){
                cout<<cnt++;
            }else{
                cout<<s;
            }
        }
        cout<<endl;
    }
    
    return 0;
}