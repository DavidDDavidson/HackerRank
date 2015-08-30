#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Times out on the website (despite a correct answer not on the web?)
// Seems to be due to runtime, not quite sure what is wrong here

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int t, n;
    cin >> t;
    if(1 <= t && t <= 100000)
    {
      while (t > 0)
      {
        cin >> n;
        if (1 <= n && n <= 10000000000)
        {
          long long int sum = 0;
          /* Find all the multiples of 3 */
          long long int mult_three = 3;
          long long int multiplier = 2;
          while(mult_three < n)
          {
            sum += mult_three;
            mult_three = 3 * multiplier;
            multiplier++;
          }
          long long int mult_five = 5;
          multiplier = 2;
          while(mult_five < n)
          {
            /* ignore multiples of 5 and 3 since theyve already been added*/
            if (mult_five % 3 != 0) sum += mult_five;
            mult_five = 5 * multiplier;
            multiplier++;
          }
          cout << sum << "\n";
        }
        t--;
      }
    }
    return 0;
}
