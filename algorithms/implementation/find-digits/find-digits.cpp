#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;

    for_each(istream_iterator<long long>(cin), istream_iterator<long long>(),
            [](long long num) {
                ostringstream oss;
                oss << num;
                const string& digits = oss.str();
                int result = count_if(
                    digits.begin(), digits.end(),
                    [=](char c){
                        int d = c - '0';
                        return d > 0 && num % d == 0;
                    });
                cout << result << endl;
            });
}
