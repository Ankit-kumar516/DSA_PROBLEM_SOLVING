#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    vector<long long> res; 

    while (t--) {
        int n; 
        cin >> n;

        vector<int> arr(n); 
        long long r = 0, s = 0;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            r += arr[i];
        }

        sort(arr.begin(), arr.end());
        s = r;

        for (int j = 0; j < n; ++j) {
            s -= arr[j];
            r = max(r, s + (long long)(j + 1) * (j + 1));
        }

        r = max(r, (long long)n * n);
        res.push_back(r);
    }

    for (auto r : res) {
        cout << r << endl;
    }

    return 0;
}

