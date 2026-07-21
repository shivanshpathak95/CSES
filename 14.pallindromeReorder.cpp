
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin,s);
    
    string ansHalf = "";
    map <char,int> mpp;


    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    
    int odd = 0;

    for(auto it : mpp){
        if(it.second % 2 == 1) {
            odd++;
        }
    }
    if(odd >1) {
        cout<< "NO SOLUTION";
        return 0;
    }
    
    int n = 0;
    for ( auto it : mpp ) {
        int n = it.second;
        if(n%2==0){
            for(int j = 0 ; j<n/2 ; j++) {
                ansHalf += it.first;
            }
        }
    }
    string firstHalf=ansHalf;
    reverse(ansHalf.begin(),ansHalf.end());

    for ( auto it : mpp ) {
        int n = it.second;
        if(n%2==1){
            for(int j = 0 ; j<n ; j++) {
                firstHalf += it.first;
            }
        }
    }

    string ans = firstHalf + ansHalf;
    cout << ans;
    return 0;
}