class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int>countFreq;
        for(auto num : nums)
        {
            countFreq[num]++;
        }

        for(auto freq : countFreq)
        {
            if(freq.second > (n/2))
            {
                return freq.first;
            }
        }
        return -1;
    }
};