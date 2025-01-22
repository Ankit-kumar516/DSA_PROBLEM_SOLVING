#include <bits/stdc++.h>
using namespace std;


int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numMonsters, healthIncrement;
        cin >> numMonsters >> healthIncrement;

        vector<int> healthPoints(numMonsters);
        for (int i = 0; i < numMonsters; ++i) {
            cin >> healthPoints[i];
        }

        // Sort health points in descending order
        sort(healthPoints.rbegin(), healthPoints.rend());

        long long minAttackStat = 0;
        for (int index = 0; index < numMonsters; ++index) {
            long long requiredAttack = healthPoints[index] + static_cast<long long>(healthIncrement) * index;
            if (requiredAttack >= minAttackStat) {
                minAttackStat = requiredAttack;
            }
        }

        cout << minAttackStat << endl;
    }

    return 0;
}
