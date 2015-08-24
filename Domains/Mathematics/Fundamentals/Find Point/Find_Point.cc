#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, px, py, qx, qy, delta_x, delta_y;
    cin >> t;
    while(t > 0)
    {
      cin >> px >> py >> qx >> qy;
      /* Calculate the change in x and y */
      delta_x = qx - px;
      delta_y = qy - py;
      /* Compute the symmetric point such that q is a midpoint of p and the
      symmetric point */
      cout << qx + delta_x << " " << qy + delta_y << "\n";
      t--;
    }
    return 0;
}
