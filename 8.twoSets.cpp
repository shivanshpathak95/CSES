#include <iostream>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*
    4n 
    */
    long long n;
    cin >> n;
    if(n%4 == 1){
        cout << "NO";
        return 0;
    }
    if(n%4 == 2){
        cout << "NO";
        return 0;
    }
    if(n%4 == 0) {
        cout << "YES" << endl;
        cout << n/2 << endl;
        for (int i = 1; i <= n/2; i =i+2) {
            cout << i << " ";
            cout << n+1-i << " ";
        }
        cout << endl << n/2 << endl;
         for (int i = 2; i <= n/2; i = i+2) {
            cout << i << " ";
            cout << n+1-i << " ";
        }       
        
    }
    if(n%4 == 3) {
        cout << "YES" << endl;
        cout << n/2 + 1 << endl;
        n = n-1;
        for (int i = 1; i <= n/2; i =i+2) {
            cout << i << " ";
            cout << n+1-i << " ";
        }
        cout << endl << n/2 << endl;
         for (int i = 2; i <= n/2; i = i+2) {
            cout << i << " ";
            cout << n+1-i << " ";
        }
        cout << n+1;
    }

    return 0;
}