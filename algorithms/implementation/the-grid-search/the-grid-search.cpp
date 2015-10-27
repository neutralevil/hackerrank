#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

bool match(const vector<string>& grid, const vector<string>& pattern) {
    for (size_t rg = 0; rg < grid.size() - pattern.size() + 1; ++rg) {
        auto pos = grid[rg].find(pattern[0]);
        if (pos == string::npos)
            continue;

        bool found = true;
        for (size_t rp = 1; rp < pattern.size(); ++rp) {
            found = (grid[rg + rp].find(pattern[rp], pos) == pos);
            if (!found)
                break;
        }

        if (found)
            return found;
    }

    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int R, C;
        cin >> R >> C;
        vector<string> grid;
        copy_n(istream_iterator<string>(cin), R, back_inserter(grid));
        int r, c;
        cin >> r >> c;
        vector<string> pattern;
        copy_n(istream_iterator<string>(cin), r, back_inserter(pattern));
        cout << (match(grid, pattern) ? "YES" : "NO") << endl;
    }
    return 0;
}
