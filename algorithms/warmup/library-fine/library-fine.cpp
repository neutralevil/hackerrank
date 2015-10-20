#include <iostream>
using namespace std;

int main() {
    int actualDay, actualMonth, actualYear;
    cin >> actualDay >> actualMonth >> actualYear;
    int expectedDay, expectedMonth, expectedYear;
    cin >> expectedDay >> expectedMonth >> expectedYear;

    int fine = 0;
    if (actualYear > expectedYear) {
        fine = 10000;
    } else if (actualYear == expectedYear) {
        if (actualMonth > expectedMonth) {
            fine = 500 * (actualMonth - expectedMonth);
        } else if (actualMonth == expectedMonth) {
            if (actualDay > expectedDay)
                fine = 15 * (actualDay - expectedDay);
        }
    }

    cout << fine << endl;
    return 0;
}
