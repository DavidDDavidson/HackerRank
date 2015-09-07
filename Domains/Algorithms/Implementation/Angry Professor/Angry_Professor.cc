#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    /* Run t test cases */
    while (t--)
    {
      int n, k, a;
      int on_time = 0;
      cin >> n >> k;
      /* check the arrival time of each student */
      for (int i = 0; i < n; i++)
      {
        cin >> a;
        if(a <= 0) on_time++;
      }
      /* class is canceled if there are fewer than k students present after
      class */
      if(on_time < k) cout << "YES" << "\n";
      else cout << "NO" << "\n";
    }
    return 0;
}
