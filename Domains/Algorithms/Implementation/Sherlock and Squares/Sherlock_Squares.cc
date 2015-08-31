#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, a, b;
    cin >> t;
    while (t--)
    {
      int count = 0;
      cin >> a >> b;
      /* The solution is the number of integers between the square root of a and
      b */
      cout << (int) (floor(sqrt(b)) - ceil(sqrt(a)) + 1) << "\n";
    }
    return 0;
}
