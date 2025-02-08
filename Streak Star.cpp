#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Sol {
public:
    int maxStreak(const vector<int>& arr, int n) {
        int maxStk = 1, curStk = 1;
        for (int i = 1; i < n; ++i) {
            if (arr[i] >= arr[i - 1]) {
                curStk++;
            } else {
                maxStk = max(maxStk, curStk);
                curStk = 1;
            }
        }
        return max(maxStk, curStk);
    }
};

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        Sol sol;
        int initStk = sol.maxStreak(arr, n);
        int maxStkMod = initStk;
        
        for (int i = 0; i < n; ++i) {
            int origVal = arr[i];
            arr[i] *= x;
            int modStk = sol.maxStreak(arr, n);
            arr[i] = origVal;
            maxStkMod = max(maxStkMod, modStk);
        }
        
        cout << maxStkMod << endl;
    }
    
    return 0;
}

