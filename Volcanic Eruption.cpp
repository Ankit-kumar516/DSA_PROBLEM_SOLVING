#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    inline ll ceilDiv(ll a, ll b) {
        return (a + b - 1) / b;
    }

    void solve() {
        int t;
        cin >> t;

        while (t--) {
            int n;
            ll p;
            cin >> n >> p;

            vector<ll> a(n), tMin(n, LLONG_MAX);
            vector<int> heap;

            for (int i = 0; i < n; ++i) {
                cin >> a[i];
                if (a[i] == 0) {
                    tMin[i] = 0;
                    heap.push_back(i);
                }
            }

            int dir[] = {-1, 1};

            while (!heap.empty()) {
                int u = heap.back();
                heap.pop_back();
                ll currT = tMin[u];

                for (int d : dir) {
                    int v = u + d;
                    if (v < 0 || v >= n) continue;

                    ll reqT = (a[v] == 0) ? 0 : ceilDiv(a[v], p);
                    ll newT = max(currT, reqT);

                    if (newT < tMin[v]) {
                        tMin[v] = newT;
                        heap.push_back(v);
                    }
                }
            }

            for (int i = 0; i < n; ++i) {
                cout << (a[i] == 0 ? 0 : tMin[i]) << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

