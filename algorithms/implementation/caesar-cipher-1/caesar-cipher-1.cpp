#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> s >> k;
  transform(s.begin(), s.end(), s.begin(),
            [k] (char c) -> char {
              if ('a' <= c && c <= 'z' )
                return (c - 'a' + k) % 26 + 'a';
              else if ('A' <= c && c <= 'Z')
                return (c - 'A' + k) % 26 + 'A';
              else
                return c;
            });
  cout << s << endl;
  return 0;
}
