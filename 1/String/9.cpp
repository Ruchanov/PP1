#include <iostream> 

using namespace std;

int main(){
  string s = "hello";

  s.append(" kbtu"); // s += " kbtu"

  s.insert(2, "fit");

  cout << s << endl;

  return 0;
}