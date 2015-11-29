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
using lli = long long int;

/* Calculate distance from the origin */
bool is_outofbounds(lli r, lli x, lli y){
  if(((x * x) + (y * y)) > (r * r)) return true;
  else return false;
}

/* Return the index that the point is in */
lli find_radius(vector <lli> r, lli d){
  lli it = (lli) distance(r.begin(), upper_bound(r.begin(), r.end(), d));
  return it;
}

int main(){
  lli K;
  lli N;
  cin >> K >> N;
  vector<lli> R(K), R_Square(K);
  /* the square of the radii */
  for(lli R_i = 0;R_i < K;R_i++)
  {
    lli temp;
    cin >> temp;
    R[R_i] = temp;
    R_Square[R_i] = temp*temp;
  }
  vector< vector<lli> > x(N,vector<lli>(2));
  for(lli x_i = 0;x_i < N;x_i++)
  {
    for(lli x_j = 0;x_j < 2;x_j++)
    {
      cin >> x[x_i][x_j];
    }
  }
  /* Precompute sizes and sort the vector containing circle size */
  sort(R.begin(), R.end());
  R.erase(unique(R.begin(), R.end()), R.end());
  sort(R_Square.begin(), R_Square.end());
  R_Square.erase(unique(R_Square.begin(), R_Square.end()), R_Square.end());
  lli R_size = R.size();
  lli x_size = x.size();
  lli sum = 0;
  /* Calculate points */
  for(lli i = 0; i < x_size; i++)
  {
    if(!is_outofbounds(R[R_size - 1], x[i][0], x[i][1]))
    {
      lli radius_index = find_radius(R_Square, ((x[i][0] * x[i][0]) + (x[i][1] * x[i][1])));
      sum += (R_size - radius_index);
    }
  }
  cout << sum;
  return 0;
}
