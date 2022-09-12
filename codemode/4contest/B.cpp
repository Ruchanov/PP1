#include<bits/stdc++.h>
using namespace std;
 int fibo(int a){
    if(a==1) return 0;
    if(a==2) return 1;
    return fibo(a-1)%101+fibo(a-2)%101;
}
int main(){
    int n;
    cin>>n;
    int k=fibo(n);
    int i=1;
    int cnt=1;
    while(true){
        if(i<k){
            i=i*2;
            cnt++;
        }else{
            i=i-1;
            cnt++;
            if(i==k){
                cnt++;
                break;
            }
        }
        if(cnt/2<=n){
            cout<<cnt<<endl<<"Povezlo, povezlo";
        }else{
             cout<<"Gl hf";
    }
}    
//     if(k%2==1){
//         while(i!=k+1){
//         i=i*2;
//         cnt++;
//         }
//     }    
//     if(k%2==0){
//         while(ik-1){
//             i=i*2;
//             cnt++;
//         }
//     }
//     if(cnt/2<=n){
//         cout<<cnt<<endl<<"Povezlo, povezlo";
//     }else{
//         cout<<"Gl hf";
//     }
// }    