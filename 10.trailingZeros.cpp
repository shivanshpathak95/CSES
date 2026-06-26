#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    /*
    Mathematically correct, but too slow...

    long long no5 = 0; // count for Number of 5s in prime factorisation of n!
    long long temp;
    for (long long i = 1; i<=n ; i++ ) {
        temp = i;
        while(temp%5==0) {
            no5++;
            temp = temp/5;
        }
    }
    cout << no5;
    */

    /*
    faster Observation : Legrndre's formula
    Numbers divisible by 5 contribute at least one 5: there are n/5 of them
    Numbers divisible by 25 contribute an extra 5: there are n/25 of them
    Numbers divisible by 125 contribute yet another: there are n/125 of them
    */
    long long d = 5; // d will take values like 5,25,125... 
    long long no5 = 0;
    while (n>=d) {
        no5 = no5 + n/d;
        d = d*5;
    }

    cout << no5;
    

    return 0;
}