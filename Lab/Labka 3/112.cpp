#include <iostream>
using namespace std;
int main () {

    int a, dup;
    cin >> a;
    int ar[a];

    for (int i=0; i<a; i++){
        cin >> ar[i];
    }

    for (int z=0; z<a; z++){
        if (ar[z]!=ar[z-1]){
            cout << ar[z] << " ";
        }
        
    }

   
    return 0;
}