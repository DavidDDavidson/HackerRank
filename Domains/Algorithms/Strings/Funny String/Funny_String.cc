#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    string s, r;
    cin >> t;
    while (t--)
    {
      bool is_funny = true;
      string s, r;
      cin >> s;
      /* creating r */
      for (int i = s.size() - 1; i >= 0; i--)
      {
        r += s[i];
      }
      /* Comparing each character as desribed in the formula */
      for (int i = 1; i < s.size(); i++)
      {
        /* Formula described in prompt */
        if(abs(((double) s[i]) - ((double) s[i - 1])) != abs(((double) r[i]) - ((double) r[i - 1])))
        {
          is_funny = false;
          break;
        }
      }
      if (is_funny) cout << "Funny" << "\n";
      else cout << "Not Funny" << "\n";
    }
    return 0;
}
