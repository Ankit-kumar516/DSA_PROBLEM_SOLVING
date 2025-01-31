#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int calc(int m, int k, const string& s) {
        vector<int> p(m + 1, 0);
        for (int i = 1; i <= m; i++) {
            p[i] = p[i - 1] + (s[i - 1] == 'S' ? 1 : 0);
        }

        int mn = 0;
        if (m >= 2) {
            for (int t = 1; t < m; t++) {
                int tmp = k - p[t] + t;
                mn = max(mn, tmp);
            }
        } else {
            mn = m;
        }

        int mx = m + k - p[m] - 1;
        int n = max({mx, mn, m});
        return n;
    }
};

int main() {
    int t;
    cin >> t;

    Solution whitewalls;
    while (t--) {
        int m, k;
        cin >> m >> k;

        string s;
        cin >> s;

        cout << whitewalls.calc(m, k, s) << endl;
    }

    return 0;
}
