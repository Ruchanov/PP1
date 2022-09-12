#include <iostream>
using namespace std;
int cook(int x ,int a[],int i){
    int temp;
    if(a[i]>=temp){
        temp = a[i];
    }
    if(i == x){
        return temp;
    }
    return(x, a, i+1);

}
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i = 0 ; i < x; i++){
        cin>>a[i];
    }
    cout<<cook(x,a, 1);
    return 0;
}