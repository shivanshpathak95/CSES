#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* 
        first we will calcultae values to be discarded

        I checked for the attacking position of the knights at different postions: 
        edges ( 3 conditions.... 2,3,4 attack squares )
        semi-edge ( 2 conditions..... 4,6 attack square)
        bulk (1 condition...... 8 attcak squares)

        Then I calculated total postions of these type for a board of k side.
        and then divided by 2 as I actually calulated every position twice

        Then I looked for condition where k<4 cause I felt like these were special;
    */
    long long n;
    cin >> n;
    long long totalPermutaions;
    long long toBeDiscarded;
    cout << 0 << endl;
    if( n > 1) {
        cout << 6 << endl;
    }
    if(n>2){
        cout << 28 << endl;        
    }
    if(n>3) {
        cout << 96 << endl;
    }

    for ( long long k = 5; k<=n ; k++ ) {
        totalPermutaions = k*k*(k*k-1)/2;
        toBeDiscarded = (48 + (k-4)*(40+8*(k-4)))/2;
        cout << totalPermutaions - toBeDiscarded << endl;
    }
    return 0;
}