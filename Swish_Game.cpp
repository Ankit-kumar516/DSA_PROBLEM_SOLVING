#include <bits/stdc++.h>
using namespace std;

class Atulaya{
public:
    int calculate(int m, int k, const string& s) {
        vector<int> p(m + 1, 0); // Prefix array
        for (int i = 1; i <= m; i++) {
            p[i] = p[i - 1] + (s[i - 1] == 'S' ? 1 : 0);
        }

        int min_n = 0;
        if (m >= 2) {
            for (int t = 1; t < m; t++) {
                int temp = k - p[t] + t;
                min_n = max(min_n, temp);
            }
        } else {
            min_n = m;
        }

        int max_n = m + k - p[m] - 1;
        int n = max({max_n, min_n, m});
        return n;
    }
};

int main() {
    int t;
    cin >> t;

    Atulaya adv;
    while (t--) {
        int m, k;
        cin >> m >> k;

        string s;
        cin >> s;

        cout << adv.calculate(m, k, s) << endl;
    }

    return 0;
}
