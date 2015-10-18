#include <iostream>
#include <iterator>
#include <numeric>

using namespace std;

int main() {
    int N = 0;
    cin >> N;
    int result = accumulate(
        istream_iterator<int>(cin), istream_iterator<int>(), 0);
    cout << result << endl;

    return 0;
}
