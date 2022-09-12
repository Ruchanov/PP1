#include <iostream>

using namespace std;

int main(){
  // - [ ] array sort, reverse
  int a[] = {3, 6, -1, 10, 4};

  // cout << *(a + 0) << endl; // a[0]
  // cout << *(a + 1) << endl; // a[1]
  // cout << *(a + 2) << endl; // a[2]
  // cout << *(a + 3) << endl; // a[3]

  // sort( [starting_address, ending_address) );
  // reverse( [starting_address, ending_address) );

  // sort(a, a + 4);
  reverse(a + 1, a + 4);

  for(int i = 0; i < 5; i++)
    cout << a[i] << " ";
  return 0;
}