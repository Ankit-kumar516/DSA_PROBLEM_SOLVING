#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findSeq(int t, vector<pair<unsigned long long, unsigned long long>> cases) {
        vector<string> results;

        for (int k = 0; k < t; k++) {
            unsigned long long n = cases[k].first;
            unsigned long long m = cases[k].second;
            vector<unsigned long long> s;
            s.push_back(n);

            for (int i = 0; i < 63; i++) {
                if ((n >> i) & 1ULL) continue;
                unsigned long long cand = n + (1ULL << i);
                if (cand <= m) {
                    s.push_back(cand);
                }
            }

            if (s.size() < 2) {
                results.push_back("-1");
            } else {
                string result = to_string(s.size()) + "\n";
                for (size_t i = 0; i < s.size(); i++) {
                    result += to_string(s[i]);
                    if (i != s.size() - 1) result += " ";
                }
                results.push_back(result);
            }
        }

        return results;
    }
};

int main() {
    int t;
    cin >> t;
    vector<pair<unsigned long long, unsigned long long>> cases(t);

    for (int i = 0; i < t; i++) {
        cin >> cases[i].first >> cases[i].second;
    }

    Solution sol;
    vector<string> result = sol.findSeq(t, cases);

    for (const auto& res : result) {
        cout << res << endl;
    }

    return 0;
}