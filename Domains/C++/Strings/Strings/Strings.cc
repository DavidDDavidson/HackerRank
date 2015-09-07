#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;
    //printing the size of both strings on line 2 as specified
    cout << a.size() << " " << b.size() << "\n";
    //concatinating the two strings and outputting on line 2 as specified
    string c = a + b;
    cout << c << "\n";
    string d;
    //switching characters for line 3 output as specified
    for(int n = 0; n < a.size(); n++)
    {
      if(n == 0)
      {
        d += b[n];
      }
      else
      {
        d += a[n];
      }
    }
    string e;
    for(int n = 0; n < b.size(); n++)
    {
      if (n == 0)
      {
        e += a[n];
      }
      else
      {
        e += b[n];
      }
    }
    cout << d << " " << e << "\n";
    return 0;
}
