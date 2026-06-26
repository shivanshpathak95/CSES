#include <iostream>
#include <algorithm>
using namespace std;

long long spiral(long long x, long long y) {
    long long k = max(x, y);
    long long base = (k - 1) * (k - 1);

    if (k % 2 == 0) {
        // Even ring: increments down the right column, then left along the bottom row
        if (x == k) {
            return base + y; // Going down column k: value is base + row number
        } else {
            return base + 2 * k - x; // Going left on row k: value increases as x decreases
        }
    } else {
        // Odd ring: increments right along the bottom row, then up the right column
        if (y == k) {
            return base + x; // Going right on row k: value is base + col number
        } else {
            return base + 2 * k - y; // Going up column k: value increases as y decreases
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        long long x, y;
        cin >> y >> x;   // Reading y (row) first, then x (col)
        cout << spiral(x, y) << "\n";
    }

    return 0;
}