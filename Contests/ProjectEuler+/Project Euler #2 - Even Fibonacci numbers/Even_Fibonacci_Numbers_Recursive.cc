#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Fibonacci(int);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int t, n;
    cin >> t;
    for (long long int i = 0; i < t; i++)
    {
      cin >> n;
      long long int f = 0;
      long long int sum = 0;
      long long int j = 3;
      while(f <= n)
      {
        f = Fibonacci(j);
        if (f % 2 == 0 && f <= n) sum += f;
        j++;
      }
      cout << sum << "\n";
    }
    return 0;
}

int Fibonacci(int n){
  if(n == 0) return 0;
  else if (n == 1) return 1;
  else return Fibonacci(n - 1) + Fibonacci(n - 2);
}
