class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        unordered_map<int,int> hmap;
        int maxFreq=0;
        int result = -1;
        for(auto num:nums)
        {
            if(num%2==0)
            {
              hmap[num]++;
            }
        }
       for(auto &entry : hmap)
        {
            int evenNum = entry.first;
            int freq=entry.second;
            if(freq>maxFreq || (freq==maxFreq && evenNum < result))
            {
            maxFreq=freq;
            result=evenNum;
        }
        }
        return result;
    }
};