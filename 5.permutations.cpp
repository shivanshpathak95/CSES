#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    If n<5 => no pemutation
    Else=>
    2 4 6 8 ..... 1 3 5 7....
    */
    int n;
    cin >> n ;
    if(n == 1) {
        cout << 1;
        return 0;
    }

    if(n < 4 ) {
        cout << "NO SOLUTION"; 
        return 0;
    }
    
    for (int i = 2; i<=n ; i= i+2 ) {
        cout << i << " ";
    }

    for (int i = 1 ; i<=n ; i = i+2 ) {
        cout << i << " ";
    }

    return 0;
}