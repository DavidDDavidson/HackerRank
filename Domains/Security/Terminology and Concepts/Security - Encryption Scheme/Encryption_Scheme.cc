#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int num_biject = 1;
    if (1 <= n && n <= 10)
    {
      while (n > 0)
      {
        num_biject *= n;
        n--;
      }
    }
    cout << num_biject;
    return 0;
}
