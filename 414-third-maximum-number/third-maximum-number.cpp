class Solution {
public:
    unordered_set<int> us;
    int thirdMax(vector<int>& nums) 
    {
        unordered_set<int>us;
        for(auto num : nums)
        {
          us.insert(num);
        }
    if (us.size() < 3) {
            return *max_element(nums.begin(), nums.end());
        }

        // Sort the set and retrieve the third maximum
        vector<int> distinct_nums(us.begin(), us.end());
        sort(distinct_nums.begin(), distinct_nums.end());

        // Return the third maximum
        return distinct_nums[distinct_nums.size() - 3];
    }
};