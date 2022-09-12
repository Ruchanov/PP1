#include <iostream>

using namespace std;

int main(){
  // - [ ] s.front()- первый символ стринга , s.back()-последний символ; 10 строка и 12 строка одно и то же

  string s1 = "hello";

  cout << s1[0] << " " << s1[s1.size() - 1] << endl; 
  
  cout << s1.front() << " " << s1.back() << endl;
 


  return 0;
}