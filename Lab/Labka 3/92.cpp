#include <iostream>
using namespace std;
int main () {

    int n, l, r;
    cin >> n >> l >> r;
    int o = r;
    int array[n];

    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    
    for (int z=0; z<l-1; z++){
        cout << array[z] << " ";
    }

    for (r; r>=l; r--){
        cout << array[r-1] << " ";
    }

    if (n>o){
        for (o;o!=n;o++){
            cout << array[o] << " ";
        }
    }
   
    return 0;
}