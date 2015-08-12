#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> vec;
    int input;
    int size;
    cin >> size;
    while(cin >> input)
    {
      vec.push_back(input);
    }
    sort(vec.begin(), vec.end());
    for(int n = 0; n < vec.size(); n++)
    {
      cout << vec[n] << " ";
    }
    return 0;
}
