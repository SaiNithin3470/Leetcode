class Solution {
public:
    bool equalFrequency(string word) {
        map<char, int> freq;

        // Count frequencies
        for (char c : word) {
            freq[c]++;
        }

        // Try removing one occurrence of each character
        for (auto &x : freq) {
            if (x.second == 0) continue;

            x.second--;

            int target = 0;
            bool ok = true;

            // Check if all non-zero frequencies are equal
            for (auto y : freq) {
                if (y.second == 0) continue;

                if (target == 0)
                    target = y.second;
                else if (y.second != target) {
                    ok = false;
                    break;
                }
            }

            if (ok)
                return true;

            // Restore frequency
            x.second++;
        }

        return false;
    }
};