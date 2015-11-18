#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t, n;
    cin >> t;
    while(t--)
    {
      long long int p = 1;
      cin >> n;
      for (long long int i = 2; i*i <= n; i++)
      {
        while(n % i == 0)
        {
        p = i;
        n /= i;
        }
        if(n > p) p = n;
      }
      cout << p << "\n";
    }
    return 0;
}
