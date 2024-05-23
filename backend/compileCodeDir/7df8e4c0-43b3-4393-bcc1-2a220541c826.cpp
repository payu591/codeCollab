#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    string foodItems;
    cin >> foodItems;

    // Count the number of 'L' and 'O' in the string
    int countL = 0, countO = 0;
    for (char c : foodItems) {
        if (c == 'L') {
            countL++;
        } else {
            countO++;
        }
    }

    // Check if there is at least one 'L' and one 'O' in the input
    if (countL < 1 || countO < 1) {
        cout << -1 << endl;
        return 0;
    }

    // Find the position where the leftmost 'L' occurs
    int k = -1;
    for (int i = 0; i < n; i++) {
        if (foodItems[i] == 'L') {
            k = i + 1;
            break;
        }
    }

    // If the leftmost 'L' is at the first position or the last position, print -1
    if (k == 1 || k == n) {
        cout << -1 << endl;
    } else {
        cout << k << endl;
    }

    return 0;
}
