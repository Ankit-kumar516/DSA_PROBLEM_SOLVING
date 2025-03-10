#include <bits/stdc++.h>

using namespace std;

int min_ops_to_make_identical(int N, const string &S1, const string &S2, const string &S3) {
    vector<int> zero_count = {count(S1.begin(), S1.end(), '0'), count(S2.begin(), S2.end(), '0'), count(S3.begin(), S3.end(), '0')};
    int total_zeros = zero_count[0] + zero_count[1] + zero_count[2];

    if (total_zeros % N != 0) {
        return -1;
    }

    int k = total_zeros / N;

    if (k == 0 || k == 3) {
        return 0;
    }

    sort(zero_count.rbegin(), zero_count.rend());

    int min_swaps = k * N - accumulate(zero_count.begin(), zero_count.begin() + k, 0);
    
    return min_swaps;
}

int main() {
    int T;
    cin >> T;

    vector<string> results;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        string S1, S2, S3;
        cin >> S1 >> S2 >> S3;

        results.push_back(to_string(min_ops_to_make_identical(N, S1, S2, S3)));
    }

    for (const string &result : results) {
        cout << result << endl;
    }

    return 0;
}