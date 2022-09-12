#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){


    string s;
    string t;
    cin >> s >> t;

    if(s.find(t) == string::npos){ //s.find(t)-находит с строки s строку t и выводит на какой позиции
        cout << "not found";//string::npos-negative position
    }else{
        cout << "found"; 
    }

  

    return 0;
}