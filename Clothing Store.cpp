#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxHappy(int x, int y, int z, int a, int b, int c) {
        int happy = 0;

        int sm = min(x, a);
        happy += sm;
        x -= sm;
        a -= sm;

        int lg = min(y, b);
        happy += lg;
        y -= lg;
        b -= lg;

        int xl = min(z, c);
        happy += xl;
        z -= xl;
        c -= xl;

        int xlToLg = min(z, b);
        happy += xlToLg;
        z -= xlToLg;
        b -= xlToLg;

        int xlToSm = min(z, a);
        happy += xlToSm;
        z -= xlToSm;
        a -= xlToSm;

        int lgToSm = min(y, a);
        happy += lgToSm;
        y -= lgToSm;
        a -= lgToSm;

        return happy;
    }
};

int main() {
    int t;
    cin >> t;

    Solution sol;
    while (t--) {
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;
        cout << sol.maxHappy(x, y, z, a, b, c) << endl;
    }

    return 0;
}