  
#include <bits/stdc++.h>
using namespace std;

char toUpper(char a)
{
    if (65 <= a && a <= 90) return a;
    else return a -= 32;
}

int main () 
{

    char a;
    cin >> a;
    cout << toUpper(a);

    return 0;
}