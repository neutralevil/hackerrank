#include <iostream>
#include <iterator>
#include <numeric>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    long result = accumulate(istream_iterator<long long>(cin),
                             istream_iterator<long long>(),
                             0ll);
    cout << result << endl;
    return 0;
}
