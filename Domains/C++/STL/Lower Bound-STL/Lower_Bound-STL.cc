#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, y, t;
    vector <int> v;
    cin >> n;
    while(n > 0) //read input until end of file
    {
      cin >> t;
      v.push_back(t); // push onto back of vector
      n--;
    }
    cin >> q;
    for(int c = 0; c < q; c++)
    {
      cin >> t;
      if(binary_search(v.begin(), v.end(), t))
      {
        cout << "Yes ";
      }
      else
      {
        cout << "No ";
      }
      std::vector<int>::iterator it = lower_bound(v.begin(), v.end(), t);
      cout << (it - v.begin()) + 1 << "\n";
    }
    return 0;
}
