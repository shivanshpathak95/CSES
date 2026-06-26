#include <iostream>
using namespace std;

void check(long long a, long long b) {
    long long x = 2*a - b;
    long long y = 2*b - a;
    if(x>=0 && x%3==0 && y>=0 && y%3==0) {
        cout << "YES"<<endl;
    }
    else {
        cout << "NO" <<endl;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    let :
    a = 2x + y  =>   y + 2x - a = 0;
    b = 2y + x  =>   2y + x - b = 0;
    a,b,x,y are Whole numbers
    These equations must have a solution in the first Quadrant:
    So:
    x = (2a-b)/3 .... whole number
    y = (2b-a)/3 .... whole number
    */
    int t;
    cin >> t;
    long long a;
    long long b;
    for (int i =0; i<t ; i++ ){
        cin >> a >> b;
        check(a,b);
    }

    return 0;
}