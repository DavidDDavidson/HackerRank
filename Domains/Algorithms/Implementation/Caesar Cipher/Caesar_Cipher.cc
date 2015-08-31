#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int n, k, temp;
    cin >> n >> s >> k;
    for (int i = 0; i < n; i++)
    {
      /* Compute proper k considering potential character rollover */
      if (k > 26) k = k % 26;
      /* Check that character is in valid range */
      if (s[i] >= 'a' && s[i] <= 'z')
      {
        /* Convert ASCII characters into integer, check for potential rollover,
        convert back into char and print to stdout
        For the lower case characters */
        temp = ((s[i] - 'a' + k) % 26) + 'a';
        cout << (char) temp;
      }
      else if (s[i] >= 'A' && s[i] <= 'Z')
      {
        /* Convert ASCII characters into integer, check for potential rollover,
        convert back into char and print to stdout
        For the upper case characters*/
        temp = ((s[i] - 'A' + k) % 26) + 'A';
        cout << (char) temp;
      }
      else cout << s[i];
    }
    return 0;
}
