#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N = 0;
    cin >> N;

    int posCount = 0;
    int negCount = 0;
    int zeroCount = 0;
    for (int i = 0; i < N; ++i) {
        int t = 0;
        cin >> t;
        if (t > 0)
            ++posCount;
        else if (t < 0)
            ++negCount;
        else
            ++zeroCount;
    }

    cout << setprecision(3) << fixed
         << double(posCount) / N << endl
         << double(negCount) / N << endl
         << double(zeroCount) / N << endl;

    return 0;
}


