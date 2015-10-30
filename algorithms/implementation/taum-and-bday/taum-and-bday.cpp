#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long b, w, x, y, z;
        cin >> b >> w >> x >> y >> z;

        if (x > y + z)
            x = y + z;
        else if (y > x + z)
            y = x + z;
        long long result = b * x + w * y;
        cout << result << endl;
    }
    return 0;
}
