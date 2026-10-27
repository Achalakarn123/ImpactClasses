
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;

        int n = s.size();
        int wordLen = words[0].size();
        int wordCount = words.size();
        int windowSize = wordLen * wordCount;
        if (n < windowSize) return ans;
        unordered_map<string, int> needed;

        for (auto word : words) {
            needed[word]++;
        }

        unordered_map<string, int> have;

        for (int i = 0; i < windowSize; i += wordLen) {
            string word = s.substr(i, wordLen);
            have[word]++;
        }

        if (have == needed) {
            ans.push_back(0);
        }

        // Continue checking the remaining windows
        for (int low = 1; low + windowSize <= n; low++) {
            have.clear();

            for (int i = low; i < low + windowSize; i += wordLen) {
                string word = s.substr(i, wordLen);
                have[word]++;
            }

            if (have == needed) {
                ans.push_back(low);
            }
        }

        return ans;
    }
};
