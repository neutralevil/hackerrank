#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int height = 0;
    cin >> height;

    string row;
    row.reserve(height);
    for (int i = 0; i < height; ++i) {
        row.push_back('#');
        cout << setw(height) << row << endl;
    }

    return 0;
}
