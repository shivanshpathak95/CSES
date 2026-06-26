#include <iostream>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    Traverse through the array
    If next element is smaller, increase it to the previous
    Count no. of steps
    */
    long n;
    cin >> n;
    long long maxHeight = INT_MIN;
    long long temp;
    long long stepCounter = 0;
    for (int i = 0 ; i < n ; i++ ) {
        cin >> temp ; 
        maxHeight = max (maxHeight, temp);
        if(temp < maxHeight) {
            stepCounter = stepCounter + maxHeight - temp;
        }
    }
    cout << stepCounter;
    return 0;
}