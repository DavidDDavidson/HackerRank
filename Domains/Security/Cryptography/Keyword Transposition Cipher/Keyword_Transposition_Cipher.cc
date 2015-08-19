#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Creates a table in alphabetical order based on the keyword. In otherwords
the size of the rows can vary, hence the use of a vector of char vectors*/
vector <vector<char>> make_alphabet(vector<char>);

/* Prints a table. Used for debugging */

void print_table(vector <vector<char>>);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    string keyword = "";
    cin >> keyword;

    /* Creating properly sorted keyword */
    vector <char> sorted_keyword;
    for (int i = 0; i < keyword.size(); i++)
    {
      sorted_keyword.push_back(keyword[i]);
    }
    sort(sorted_keyword.begin(), sorted_keyword.end());
    for (int i = 0; i < sorted_keyword.size(); i++)
    {
      cout << sorted_keyword[i]; //For debugging purposes
    }
    cout << "\n";

    /*creating alphabet table row by row*/
    vector <vector<char>> alpha = make_alphabet(sorted_keyword);
    print_table(alpha);

    return 0;
}

/***********/
/* Methods */
/***********/

vector <vector<char>> make_alphabet(vector<char> keyword){
  vector <vector<char>> alpha_table;
  char temp = 'A';
  int row_count = 0;
  while ('A' <= temp && temp <= 'Z')
  {
    vector <char> new_row;
    alpha_table.push_back(new_row);
    for(int i = 0; (i < keyword.size()) && ('A' <= temp && temp <= 'Z'); i++)
    {
      alpha_table[row_count].push_back(temp++);
    }
    row_count++;
  }
  return alpha_table;
};

void print_table(vector <vector<char>> table){
      for (int i = 0; i < table.size(); i++)
      {
        for(int j = 0; j < table[i].size(); j++)
        {
          cout << table[i][j];
        }
      }
};
