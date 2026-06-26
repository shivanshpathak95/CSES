#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    
    long long ans = 1;
    for (long long i = 0; i < n; i++) {
        ans = (ans * 2) % MOD;  // apply mod at every step
    }
    
    cout << ans << "\n";
    return 0;
}