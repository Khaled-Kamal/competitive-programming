#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparePoints(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> points(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second;
    }
    
    sort(points.begin(), points.end(), comparePoints);
    
    for (int i = 0; i < n; ++i) {
        cout << points[i].first << " " << points[i].second << endl;
    }
    
    return 0;
}
