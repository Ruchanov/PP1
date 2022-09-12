#include <iostream>

using namespace std;

int main(){
  // - [ ] find()
  string s1 = "hello kbtu";
  string s2 = "kbtu";

  int f = s1.find(s2);
  if(f != string::npos){ // <===> if(f != -1){
    cout << "found\nstarting index = " << f << endl;
  } else {
    cout << "not found\n";
  }



  return 0;
}