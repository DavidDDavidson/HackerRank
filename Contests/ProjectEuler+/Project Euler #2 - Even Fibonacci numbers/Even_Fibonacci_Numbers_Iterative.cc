#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int t, n;
    cin >> t;
    while(t--)
    {
      cin >> n;
      long long int f_2 = 1;
      long long int f_1 = 2;
      long long int f_n = 3;
      long long int sum = f_1;
      while(true)
      {
        f_2 = f_1;
        f_1 = f_n;
        f_n = f_2 + f_1;
        if (f_n > n) break;
        if (f_n % 2 == 0) sum += f_n;
      }
      cout << sum << "\n";
    }
    return 0;
}
