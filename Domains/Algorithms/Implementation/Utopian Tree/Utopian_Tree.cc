#include <iostream>
using namespace std;

int height(int n) {
    int height = 1;
    int cycle = 1;
    while (n--)
    {
      if (cycle)
      {
        height *= 2;
        cycle = 0;
      }
      else
      {
        height++;
        cycle = 1;
      }
    }
    return height;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
