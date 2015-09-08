#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* first order summation formula */
long long int summation (long long int N){
  return ((N * (N + 1)) / 2);
};

int main() {
    long long int T, N;
    cin >> T;
    while(T--)
    {
      cin >> N;
      /* Prompt asks for multiples below N */
      N -= 1;
      /* the sum of all multiples of 3 from 3 to N
      added to
      the sum of all multiples of 5 from 5 to N
      subtracted by
      the sum of all multiples of 15 from 15 to N*/
      cout << (summation(N / 3) * 3) + (summation(N / 5) * 5) - (summation(N / 15) * 15) << "\n";
    }
    return 0;
}
