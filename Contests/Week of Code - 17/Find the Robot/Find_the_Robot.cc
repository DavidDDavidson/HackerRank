#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t;
    cin >> t;
    while (t--)
    {
      long long int n;
      long long int x, y;
      x = y = 0;
      long long int dir = 1;
      cin >> n;
      /* Right */
      for(int i = 1; i <= n; i++)
      {
        if (dir == 1) x += i;
        /* Up */
        else if (dir == 2) y += i;
        /* Left */
        else if (dir == 3) x -= i;
        /* Down */
        else if (dir == 4) y -= i;

        /* Reset or increment cycle */
        if(dir == 4) dir = 1;
        else dir++;
      }
      cout << x << " " << y << "\n";
    }
    return 0;
}
