#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> primes;    // Stores prime numbers
    unordered_map<int, int> maskCache; // Cache for mask to MEX prime mapping
    int L = 100;           // Upper limit for primes

public:
    Solution() {
        // Precompute primes up to L
        vector<bool> isPrime(L + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= L; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= L; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        for (int i = 2; i <= L; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }
    }

    int getMexPrime(int mask) {
        if (maskCache.count(mask)) {
            return maskCache[mask];
        }
        int pc = primes.size();
        for (int i = 0; i < pc; ++i) {
            if (((mask >> i) & 1) == 0) { // Fixed misplaced parenthesis
                maskCache[mask] = primes[i];
                return primes[i];
            }
        }
        // Compute next prime if all bits are set
        int candidate = primes.back() + 1;
        while (true) {
            bool isPrime = true;
            for (int p : primes) {
                if (candidate % p == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                maskCache[mask] = candidate;
                return candidate;
            }
            ++candidate;
        }
    }

    int dfs(int node, int parent, int mask, const vector<int>& masks, const vector<vector<int>>& adj) {
        int total = getMexPrime(mask);
        for (int nei : adj[node]) {
            if (nei != parent) {
                total += dfs(nei, node, mask & masks[nei], masks, adj);
            }
        }
        return total;
    }

    void solve() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> vals(n);
            for (int i = 0; i < n; ++i) {
                cin >> vals[i];
            }

            vector<vector<int>> adj(n);
            for (int i = 0; i < n - 1; ++i) {
                int u, v;
                cin >> u >> v;
                --u; --v; // Convert to 0-indexed
                adj[u].push_back(v);
                adj[v].push_back(u);
            }

            vector<int> masks(n, 0);
            int pc = primes.size();
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < pc; ++j) {
                    if (vals[i] % primes[j] == 0) {
                        masks[i] |= (1 << j);
                    }
                }
            }

            vector<int> result(n, 0);
            for (int i = 0; i < n; ++i) {
                result[i] = dfs(i, -1, masks[i], masks, adj);
            }

            for (int res : result) {
                cout << res << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;
    sol.solve();

    return 0;
}