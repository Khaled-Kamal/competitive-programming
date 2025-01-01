#include <iostream>
#include <deque>
using namespace std;

int main() {
    int q;
    cin >> q; // Number of queries
    
    deque<int> dq; // Deque to store integers
    
    while (q--) {
        string query;
        cin >> query;
        
        if (query == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (query == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (query == "pop_front") {
            dq.pop_front();
        } else if (query == "pop_back") {
            dq.pop_back();
        } else if (query == "front") {
            cout << dq.front() << endl;
        } else if (query == "back") {
            cout << dq.back() << endl;
        } else if (query == "print") {
            int x;
            cin >> x;
            cout << dq[x - 1] << endl;
        }
    }
    
    return 0;
}
