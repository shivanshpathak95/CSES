#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        long long x, y;
        cin >> y >> x;  // you read y first, then x

        if (x == 1 && y == 1) { cout << 1 << "\n"; continue; }

        long long i = 1, j = 1;   // i = row, j = col
        long long xVel = 0, yVel = 1; // start moving right (col increases)
        long long num = 1;

        while (i != x || j != y) {
            long long k = max(i, j);

            if (yVel == 1  && j + yVel > k) { xVel = 1;  yVel = 0;  } // right → down
            else if (xVel == 1  && i + xVel > k) { xVel = 0;  yVel = -1; } // down → left
            else if (yVel == -1 && j + yVel < 1) { xVel = -1; yVel = 0;  } // left → up
            else if (xVel == -1 && i + xVel < 1) { xVel = 0;  yVel = 1;  } // up → right

            i += xVel;
            j += yVel;
            num++;
        }

        cout << num << "\n";
    }

    return 0;
}