#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
    int N = 1;
    cin >> N;
    
    vector<int> result(1, 1);
    for (; N > 1; --N) {
        int carry = 0;
        for (int& s : result) {
            int r = s * N + carry;
            s = r % 10;
            carry = r / 10;
        }
        
        while (carry > 0) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }
    copy(result.rbegin(), result.rend(), ostream_iterator<int>(cout));
    cout << endl;
    return 0;    
}