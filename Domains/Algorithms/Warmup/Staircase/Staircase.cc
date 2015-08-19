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
    int k = n - 1;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if(j >= k)
        {
          cout << "#";
        }
        else
        {
          cout << " ";
        }
      }
      cout << "\n";
      k--;
    }
    return 0;
}
