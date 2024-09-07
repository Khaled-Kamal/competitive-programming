#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

void solve() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  
        string row1, row2;
        cin >> row1 >> row2;  

       
        replace(row1.begin(), row1.end(), 'G', 'X');
        replace(row1.begin(), row1.end(), 'B', 'X');
        replace(row2.begin(), row2.end(), 'G', 'X');
        replace(row2.begin(), row2.end(), 'B', 'X');

   
        if (row1 == row2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
