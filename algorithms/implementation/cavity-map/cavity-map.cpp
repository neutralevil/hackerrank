#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
  unsigned n;
  cin >> n;
  vector<string> map;
  copy_n(istream_iterator<string>(cin), n, back_inserter(map));

  for (unsigned row = 1; row < n - 1; ++row) {
    for (unsigned col = 1; col < n - 1; ++col) {
      char& c = map[row][col];
      if (c > map[row - 1][col]
          && c > map[row + 1][col]
          && c > map[row][col - 1]
          && c > map[row][col + 1]) {
        c = 'X';
      }
    }
  }

  for (auto row : map)
    cout << row << endl;

  return 0;
}
