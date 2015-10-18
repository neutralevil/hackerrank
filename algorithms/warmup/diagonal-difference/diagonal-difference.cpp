#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    vector<int> matrix(N*N);
    copy(istream_iterator<int>(cin), istream_iterator<int>(), matrix.begin());

    int result = 0;
    int step = N + 1;
    for (int i = 0; i < matrix.size(); i += step)
        result += matrix[i];
    step = N - 1;
    for (int i = step; i < matrix.size() - 1; i += step)
        result -= matrix[i];
    cout << abs(result);
    return 0;
}
