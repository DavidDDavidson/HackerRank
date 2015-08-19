#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double n;
    cin >> n;
    double pos = 0;
    double zero = 0;
    double neg = 0;
    int temp;
    for (double i = 0; i < n; i++)
    {
      cin >> temp;
      if(temp > 0)
      {
        pos++;
      }
      else if(temp == 0)
      {
        zero++;
      }
      else if(temp < 0)
      {
        neg++;
      }
    }
    cout << pos/n << "\n" << neg/n << "\n" << zero/n << "\n";
    return 0;
}
