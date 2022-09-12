#include<iostream>
using namespace std;
int main(){
    int n=5,m=5;
    string a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]="*";
        }
    }
    cout<<"Choose language:"<<endl<<"1.English"<<endl<<"2.Russki"<<endl;
    int digit;
    cin>>digit;
    if(digit==2){
        cout<<"1.Kak "
    }
    return 0;
}