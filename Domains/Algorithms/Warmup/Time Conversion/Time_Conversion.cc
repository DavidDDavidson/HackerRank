#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s_time;
    cin >> s_time;
    int hour = stoi(s_time.substr(0, 2));
    int minute = stoi(s_time.substr(3, 2));
    int second = stoi(s_time.substr(6, 2));
    string format = s_time.substr(8, 2);
    if (format == "PM")
    {
      if (hour != 12)
      {
        hour += 12;
      }
    }
    else
    {
      if(hour == 12)
      {
        hour = 0;
      }
    }
    if (hour < 10)
    {
      cout << '0';
    }
    cout << hour << ":";
    if (minute < 10)
    {
      cout << '0';
    }
    cout << minute << ":";
    if (second < 10)
    {
      cout << '0';
    }
    cout << second;
    return 0;
}
