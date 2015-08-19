#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int temp;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
      cin >> temp;
      sum += temp;
    }
    cout << sum;
    return 0;
}
