#include <bits/stdc++.h>
using namespace std;

class AdvitiyaSteps {
    string target = "ADVITIYA";

public:
    int calculate_steps(const string& s) {
        int steps = 0;
        for (int i = 0; i < 8; ++i) {
            int diff = (target[i] - s[i] + 26) % 26;
            steps += diff;
        }
        return steps;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();

    AdvitiyaSteps advitiya;

    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        cout << advitiya.calculate_steps(s) << endl;
    }

    return 0;
}

