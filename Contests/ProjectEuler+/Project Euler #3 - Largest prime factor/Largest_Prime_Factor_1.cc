#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    /*********************************************************************/
    /* Finding the prime integers using the Sieve of Eratosthenes method */
    /*********************************************************************/
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      int lpf = 1;
      /* A number cannot have a prime largers than its square root */
      vector <int> primes;
      for (int i = 2; i <= n; i++)
      {
        bool is_prime = true;
        if ((i % 7 != 0 && i % 5 != 0 && i % 3 != 0 && i % 2 != 0) || (i == 2 || i == 3 || i == 5 || i == 7))
        {
          for (int j = 0; j < primes.size(); j++)
          {
            if (i % primes[j] == 0)
            {
              is_prime = false;
              break;
            }
          }
          if(is_prime)
          {
            primes.push_back(i);
            if (n % i == 0)
            {
              lpf = i;
            }
          }
        }
        if (i == n/2) i = n - 1;
      }
      /* if the largest prime is fround to be 1, check to see if n is a prime
      itself */
      cout << lpf << "\n";
    }
    return 0;
}
