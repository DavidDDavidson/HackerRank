#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s = "";
    cin >> s;
    if (1 <= s.size() && s.size() <= 10)
    {
      string new_string = "";
      /* Output the set with each element increased by 1 */
      for(int i = 0; i < s.size(); i++)
      {
        /* Must include if statement otherwise characters do not stay within
        the number characters. In otherwords, characters extend beyond numbers,
        they include letters and punctuation symbols. Increasing '9' by 1 yields
        a non-number character */
        if (s[i] == '9')
        {
          new_string += '0';
        }
        else
        {
          new_string += s[i] + 1;
        }
      }
      cout << new_string;
    }
    return 0;
}
