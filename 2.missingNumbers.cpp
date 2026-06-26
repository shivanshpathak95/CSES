#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    Calculate sum of all numbers upto n]
    Calculate sum of all entries
    Subtract these
    cout difference
    */
    long n;
    long temp;
    long long summ=0;
    cin >> n;
    long long sum = n*(n+1)/2;
    for (int i = 1; i <n ; i++) {
        cin >> temp;
        summ = summ + temp;
    } 
    cout << sum - summ;

    return 0;
}