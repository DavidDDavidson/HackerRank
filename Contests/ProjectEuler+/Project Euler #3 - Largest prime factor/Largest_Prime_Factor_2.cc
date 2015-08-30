#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, n;
    cin >> t;
    while (t--)
    {
      cin >> n;
      /* n is even */
      if (n % 2 == 0)
      {
        while(true)
        {
          if (n == 1)
          {
            n = 2;
            break
          }
          if (n % 2 == 0)
          {
            n /= 2;
            break;
          }
        }
      }
      /* n is odd */
      else
      {

      }
      cout << n << "\n";
    }
    return 0;
}
