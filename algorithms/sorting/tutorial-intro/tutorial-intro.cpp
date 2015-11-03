#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    int V, n;
    cin >> V >> n;
    vector<int> ar;
    copy_n(istream_iterator<int>(cin), n, back_inserter(ar));
    auto pos = find(ar.begin(), ar.end(), V);
    cout << distance(ar.begin(), pos);
    return 0;
}
