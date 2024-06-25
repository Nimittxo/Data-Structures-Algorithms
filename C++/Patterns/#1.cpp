#include <iostream>
using namespace std;

int main() {
    int rows = 9; // Number of rows for the pattern

    for (int i = 9; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
