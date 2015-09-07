#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int exp_day, exp_month, exp_year, act_day, act_month, act_year;
    cin >> act_day >> act_month >> act_year >> exp_day >> exp_month >> exp_year;
    /* Before or on the return date */
    if ((act_year == exp_year && act_month == exp_month && act_day == exp_day) || (act_year == exp_year && act_month == exp_month && act_day < exp_day) || (act_year == exp_year && act_month < exp_month) || act_year < exp_year)
    {
      cout << 0;
    }
    else if (act_year == exp_year && act_month == exp_month && act_day > exp_day)
    {
      cout << (act_day - exp_day) * 15;
    }
    else if (act_year == exp_year && act_month > exp_month)
    {
      cout << (act_month - exp_month) * 500;
    }
    else
    {
      cout << 10000;
    }
    return 0;
}
