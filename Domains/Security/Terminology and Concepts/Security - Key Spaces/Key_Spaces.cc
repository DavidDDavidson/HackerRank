#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string message = "";
    cin >> message;
    int e;
    cin >> e;
    if((1 <= message.size() && message.size() <= 10) && (0 <= e && e <= 9))
    {
      for(int i = 0; i < message.size(); i++)
      {
        /*Converting from ASCII to integer*/
        /*Divide by modulo 10 to keep in single digits */
        cout << ((message[i] - '0') + e) % 10;
      }
    }
    return 0;
}
