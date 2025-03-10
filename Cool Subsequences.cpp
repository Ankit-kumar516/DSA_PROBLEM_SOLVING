#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> arr(n);
            for (int &x : arr) cin >> x;

            unordered_set<int> seen;
            bool f = false;

            for (int x : arr) {
                if (seen.count(x)) {
                    cout << 1 << endl;
                    cout << x << endl;
                    f = true;
                    break;
                }
                seen.insert(x);
            }
            if (!f) cout << -1 << endl;
        }
    }
};

int main() {
    Solution s;
    s.solve();
    return 0;
}