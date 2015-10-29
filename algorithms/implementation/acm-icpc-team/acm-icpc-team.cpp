#include <vector>
#include <bitset>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
static const int TOTAL_TOPICS = 500;
typedef bitset<TOTAL_TOPICS> Mask;
int main() {
    int n, m;
    cin >> n >> m;

    vector<Mask> masks;
    copy_n(istream_iterator<Mask>(cin), n, back_inserter(masks));

    int maxTopics = 0;
    int teamCount = 0;

    for (size_t i = 0; i < masks.size(); ++i) {
        for (size_t j = i; j < masks.size(); ++j) {
            auto merge = (masks[i] | masks[j]).count();
            if (merge > maxTopics) {
                maxTopics = merge;
                teamCount = 1;
            } else if (merge == maxTopics) {
                ++teamCount;
            }
        }
    }

    cout << maxTopics << endl << teamCount << endl;

    return 0;
}
