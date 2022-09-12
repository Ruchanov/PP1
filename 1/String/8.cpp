#include<iostream>
using namespace std;

int main(){
  // - [ ] substr
  string s1 = "hello kbtu";

  // string s2 = s1.substr(2);
  string s2 = s1.substr(2, 6);

  cout << s2 << endl;


  return 0;
}