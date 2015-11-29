#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int A;
    int B;
    int C;
    int D;
    int num_ghosts = 0;
    cin >> A >> B >> C >> D;
    for(int i = 1; i <= A; i++)
    {
      for(int j = 1; j <= B; j++)
      {
        for(int k = 1; k <= C; k++)
        {
          for(int l = 1; l <= D; l++)
          {
            if(((i - j) % 3 == 0) && ((j + k) % 5 == 0) && ((i * k) % 4 == 0) && (abs(gcd(i, l)) == 1)) num_ghosts++;
          }
        }
      }
    }
    cout << num_ghosts;
    return 0;
}
