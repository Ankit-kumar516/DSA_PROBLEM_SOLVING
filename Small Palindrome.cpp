#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string Small_Palindrome(int x, int y) {
        string prefix = ""; 
        string suffix = ""; 

        while (x >= 2) {
            prefix += '1';
            suffix = '1' + suffix;
            x -= 2;
        }

   
        while (y >= 2) {
            prefix += '2';
            suffix = '2' + suffix;
            y -= 2;
        }

      
        if (x == 1) {
            prefix += '1'; 
        } else if (y == 1) {
            prefix += '2'; 
        }

        string result = prefix + suffix;
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        Solution ob;
        cout << ob.Small_Palindrome(x, y) << endl;
    }
    return 0;
}
