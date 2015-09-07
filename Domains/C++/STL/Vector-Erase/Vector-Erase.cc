#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /*The first line of the input contains an integer N.The next line contains N
  space separated integers.The third line contains a single integer x,
  denoting the position of an element that should be removed from the vector.
  The fourth line contains two integers a and b denoting the range that
  should be erased from the vector inclusive of a and exclusive of b.*/

  vector <int> v;
  int input;
  int size;
  cin >> size;
  while(size > 0) //read input until end of file
  {
    cin >> input;
    v.push_back(input); // push onto back of vector
    size--;
  }
  int rm, a, b;
  cin >> rm >> a >> b;
  v.erase(v.begin() + rm -1);
  v.erase(v.begin() + a -1, v.begin() + b -1);
  cout << v.size() << "\n";
  for(int n = 0; n < v.size(); n++)
  {
    cout << v[n] << " ";
  }
  return 0;
}
