#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int f[n];
    if(1 <= n && n <= 20)
    {
      for (int i = 0; i < n; i++)
      {
        cin >> f[i];
      }
      for (int i = 0; i < n; i++)
      {
        /* Pass the value of f(n) into f(n). In other words f(f(n)). Takes into
        account the fact that indexes begin at 0 (so the value is subtracted by
        1). */
        cout << f[f[i] - 1] << "\n";
      }
    }
    return 0;
}
