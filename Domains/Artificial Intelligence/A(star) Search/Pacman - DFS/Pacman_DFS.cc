#include <iostream>
#include <vector>
using namespace std;

void dfs( int r, int c, int pacman_r, int pacman_c, int food_r, int food_c, vector <string> grid){
    //your logic here
    map<pair<int,int>,bool> discovered_map;
    pair <int, int> pacman_coordinates (pacman_r, pacman_c);
    pair <int, int> food_coordinates (food_r, food_c);
    vector <pair> S;
    S.push_back(pacman_coordinates);
    while(S.size() > 0)
    {
      pacman_coordinates = S.pop_back();
      if(discovered_map[pacman_coordinates] == NULL){
        discovered_map.insert(make_pair(pacman_coordinates,true));

      }
    }

}

int main(void) {

    int r,c, pacman_r, pacman_c, food_r, food_c;

    cin >> pacman_r >> pacman_c;
    cin >> food_r >> food_c;
    cin >> r >> c;

    vector <string> grid;

    for(int i=0; i<r; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    dfs( r, c, pacman_r, pacman_c, food_r, food_c, grid);

    return 0;
}
