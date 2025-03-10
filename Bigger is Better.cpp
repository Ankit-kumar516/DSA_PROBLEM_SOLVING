#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class RNFinder {
public:
    std::string getNextName(int len, const std::string& curr) {
        if (std::all_of(curr.begin(), curr.end(), [](char c) { return c == 'z'; })) {
            return "-1";
        }

        if (curr == std::string(curr.rbegin(), curr.rend())) {
            bool isMaxPal = true;
            for (int i = 0; i < (len + 1) / 2; ++i) {
                int mir = len - 1 - i;
                if (curr[i] != 'z' || curr[mir] != 'z') {
                    isMaxPal = false;
                    break;
                }
            }
            if (isMaxPal) {
                return "-1";
            }
        }

        std::string mod = curr;
        bool inc = false;
        for (int i = 0; i < len; ++i) {
            if (mod[i] < 'z') {
                mod[i] = mod[i] + 1;
                inc = true;
                for (int j = i + 1; j < len; ++j) {
                    mod[j] = 'a';
                }
                break;
            }
        }

        std::string cand = mod;
        if (cand > curr && std::string(cand.rbegin(), cand.rend()) > curr) {
            return cand;
        }

        mod.assign(len, 'a');
        int mid = len / 2;
        for (int i = 0; i <= mid; ++i) {
            int mir = len - 1 - i;
            for (char c = 'a'; c <= 'z'; ++c) {
                mod[i] = c;
                mod[mir] = c;
                cand = mod;
                if (cand > curr && std::string(cand.rbegin(), cand.rend()) > curr) {
                    return cand;
                }
            }
        }

        return "-1";
    }

    void processCases() {
        int t;
        std::cin >> t;
        std::vector<std::string> res;

        for (int i = 0; i < t; ++i) {
            int len;
            std::string curr;
            std::cin >> len >> curr;
            res.push_back(getNextName(len, curr));
        }

        for (const auto& r : res) {
            std::cout << r << std::endl;
        }
    }
};

int main() {
    RNFinder finder;
    finder.processCases();
    return 0;
}