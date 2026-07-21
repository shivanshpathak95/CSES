#include <iostream>
using namespace std;

void TOH(int n, int a, int b, int c) {
    if(n>0) {
        TOH(n-1, a,c,b);
        cout << a<<" "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}

void summation(int n, int& sum ) {
    if(n>0){
        summation(n-1, sum);
        sum++;
        summation(n-1, sum);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;
    
    
    int sum = 0;
    summation(n,sum);
    cout << sum<<endl;
    TOH(n,1,2,3);


    return 0;
}
