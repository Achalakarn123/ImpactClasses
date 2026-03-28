class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        // vector<int>v;
        // int count=0;
        // int candidate=0;
        // for(auto num:nums)
        // {
        //     if(count==0)
        //     {
        //         candidate=num;
        //     }
        //         count+=(num==candidate)?1:-1;
        // }
        // v.push_back(candidate);
        // return v;

        map<int,int>freqArray;
        vector<int>v;
        for(auto num : nums)
        {
            freqArray[num]++;
        }
        for(auto num : freqArray)
        {
            if(num.second > (nums.size()/3))
            {
                v.push_back(num.first);
            }
        }
        return v;
    }
};