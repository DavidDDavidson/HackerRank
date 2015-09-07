#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int matrix [n][n];
    int first_diagonal = 0;
    int second_diagonal = 0;
    int abs_sum;
    //Creating the matrix;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> matrix[j][i];
      }
    }
    //sum of first_diagonal
    for(int i = 0; i < n; i++)
    {
      first_diagonal += matrix[i][i];
    }
    //sum of second_diagonal
    int k = n - 1;
    for(int i = 0; i < n; i++)
    {
      second_diagonal += matrix[i][k];
      k--;
    }
    cout << abs(first_diagonal - second_diagonal);
    return 0;
}
