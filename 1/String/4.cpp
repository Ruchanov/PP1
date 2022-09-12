#include <iostream>

using namespace std;

int main(){
  // - [ ] What is string

  // kbtu, hello, my name FIT.

  char word[] = {'k', 'b', 't', 'u'};

  string s1 = "hello";
  string s2("hello");

  cout << (s1 == s2) << endl;

  cout << s1.size() << " " << s1.length() << endl;
  
  return 0;
}