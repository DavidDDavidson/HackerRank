#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int V, n, index;
    cin >> V >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
      cin >> ar[i];
      if (ar[i] == V) index = i;
    }
    cout << index;
    return 0;
}
