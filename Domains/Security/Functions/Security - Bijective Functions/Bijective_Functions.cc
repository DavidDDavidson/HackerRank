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
    if (1 <= n && n <= 20) //constraints
    {
      int y [n];
      int space;
      for(int i = 0; i < n; i++)
      {
        cin >> y[i];
      }

      /* algorithm to check if bijective O(n^2) */
      bool is_bijective = true;
      for(int i = 0; i < n; i++)
      {
        for(int j = 0; j < n; j++)
        {
          if(i != j && y[i] == y[j])
          {
            //cout << i << "," << j << "\n" << y[i] << " " << y[j] << "\n"<< "\n";
            is_bijective = false;
            break;
          }
        }
      }
      if (is_bijective == true)
      {
        cout << "YES";
      }
      else
      {
        cout << "NO";
      }
    }
    return 0;
}
