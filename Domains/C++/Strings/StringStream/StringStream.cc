#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   vector<int> parsed;
   stringstream ss(str);
   char comma;
   int integer;
   //pass characters from the stream until end of stream reached
   while(ss >> integer)
   {
     parsed.push_back(integer);
     if (ss.peek() == ',')    //looks at next character in data stream
      ss.ignore();  //ignores it if a comma
   }
   return parsed;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
