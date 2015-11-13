#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;
    double num;
    cin >> n;
    vector <int> set;
    while(n--)
    {
      /* Insert element and sort */
      cin >> num;
      set.push_back(num);
      sort(set.begin(), set.end());
      /* Even number of elements */
      if(set.size() % 2 == 0)
      {
        cout << (set[set.size()/2] + set[(set.size()/2)-1]) / 2.0 << "\n";
      }
      /* Odd number of elements */
      else
      {
        cout << set[set.size()/2] << "\n";
      }
    }
    return 0;
}
