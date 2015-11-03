#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string input;
    cin >> input;
    double s = sqrt(input.length());
    int row = floor(s), col = row;
    if (row * col < input.length())
        col = ceil(s);
    if (row * col < input.length())
        row = col;

    for (int c = 0; c < col; ++c) {
        if (c != 0)
            cout << " ";
        for (int r = 0; r < row; ++r) {
            int offset = r * col + c;
            if (offset >= input.length())
                break;
            cout << input[offset];
        }
    }
    cout << endl;
    return 0;
}
