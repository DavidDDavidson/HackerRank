#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set <int> s;
    int q, y, x;
    cin >> q;
    for (int n = 0; n < q; n++)
    {
      cin >> y >> x;
      if (y == 1)
      {
        s.insert(x);
      }
      else if (y == 2)
      {
        s.erase(x);
      }
      else if (y == 3)
      {
        set<int>::iterator itr = s.find(x);
        if (itr == s.end())
        {
          cout << "No\n";
        }
        else
        {
          cout << "Yes\n";
        }
      }
    }
    return 0;
}
