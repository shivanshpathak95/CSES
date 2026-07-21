#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    cin>> n;

    long long l = 1;
    for(int i = 0; i < n; i++) {
        l = l * 2;
    }

    for( int i = 0; i < l; i++ ) {
        int grey = i ^ (i>>1);
        for (int j = n - 1; j >= 0; j--) {
            cout << ((grey >> j) & 1); 
        }
        cout<<endl;
    }
    
    return 0;
}
