#include <iostream>
#include <string>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    Make a count variable and maxx
    Traverse through the string
    maxx = max( maxx, count)
    If character same => count ++
    If character differe => count = 0
    */
    
    string str = "";
    cin >> str;
    int n = str.size();
    if (n == 0) {
        cout << 0;
        return 0;
    }
    int i = 0;
    int count = 1;
    int maxx = 1;


    while(i < n-1 ) {
        
        if( str[i+1] == str[i] ) {
            count++;
        }
        else {
            count = 1;
        }
        maxx = max(maxx,count);
        i++;
    }
    cout << maxx;


    return 0;
}