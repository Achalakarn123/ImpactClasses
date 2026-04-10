class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<string> commonCharacteredString;
        unordered_map<char,int> freqMap;

        // Step 1: first string ka freq
        for(int it = 0; it < words[0].length(); it++)
        {
            freqMap[words[0][it]]++;
        }

        // Step 2: remaining strings
        for(int i = 1; i < words.size(); i++)
        {
            unordered_map<char,int> dummyMap;

            // current string ka freq
            for(int j = 0; j < words[i].length(); j++)
            {
                char ch = words[i][j];
                dummyMap[ch]++;
            }

            // Step 3: compare
            for(auto it = freqMap.begin(); it != freqMap.end(); )
            {
                char ch = it->first;

                if(dummyMap.find(ch) == dummyMap.end())
                {
                    it = freqMap.erase(it);
                }
                else
                {
                    it->second = min(it->second, dummyMap[ch]);
                    it++;
                }
            }
        }

        // Step 4: convert to vector<string>
        for(auto it : freqMap)
        {
            char ch = it.first;
            int count = it.second;

            for(int i = 0; i < count; i++)
            {
                commonCharacteredString.push_back(string(1, ch));
            }
        }

        return commonCharacteredString;
    }
};