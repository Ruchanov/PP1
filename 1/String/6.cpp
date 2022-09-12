  
#include <iostream>

using namespace std;

int main(){
  // - [ ] s.begin(), s.end() (related with array pointers)

  string s1 = "hello";

  // cout << *s1.begin() << endl;
  
  sort(s1.begin(), s1.end());
  reverse(s1.begin(), s1.end());

  cout << s1 << endl;

  return 0;
}