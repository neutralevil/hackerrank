#include <iostream>
using namespace std;

int height(int n) {
    int result = 1;
    bool spring = true;
    for (int i = 0; i < n; ++i) {
        if (spring)
            result *= 2;
        else
            result += 1;
        spring = !spring;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}

