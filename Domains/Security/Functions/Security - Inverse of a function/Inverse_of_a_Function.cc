#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    /* Constraints */
    if (1 <= n && n <= 20)
    {
      int f[n];
      for(int i = 0; i < n; i++)
      {
        cin >> f[i];
      }
      for(int i = 0; i < n; i++)
      {
        /* scan all the data for a match to an index value */
        for(int j = 0; j < n; j++)
        {
          /* if theres a match print it */
          if(f[j] - 1 == i)
          {
            cout << j + 1 << "\n";
            j = n - 1;
          }
          /* otherwise, print an empty line */
          else{
            if (j == n - 1)
            {
              cout << "\n";
            }
          }
        }
      }

    }
    return 0;
}
