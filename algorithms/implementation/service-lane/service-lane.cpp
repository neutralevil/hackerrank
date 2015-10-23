#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> widths;
    istream_iterator<int> in(cin);
    copy_n(in, N, back_inserter(widths));
    
    while (T--) {
        int enter, exit; 
        cin >> enter >> exit;
        cout << *min_element(widths.begin() + enter,
                             widths.begin() + exit + 1)
             << endl;
    }
    return 0;
}