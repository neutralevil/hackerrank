#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<const char*> numberMap = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen",
    "quarter", "sixteen", "seventeen", "eighteen", "nineteen",
    "twenty", "twenty one", "twenty two", "twenty three", "twenty four",
    "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine",
    "half",};

int main() {
    int hours, minutes;
    cin >> hours >> minutes;

    const char* conj = "past";
    if (minutes > 30) {
        ++hours;
        minutes = 60 - minutes;
        conj = "to";
    }

    if (minutes != 0) {
        cout << numberMap[minutes];
        if (minutes != 15 && minutes != 30) {
            cout << " minute";
            if (minutes > 1)
                cout << "s";
        }

        cout << " " << conj << " ";
    }
    cout << numberMap[hours];
    if (minutes == 0)
        cout << " o' clock";
    cout << endl;

    return 0;
}
