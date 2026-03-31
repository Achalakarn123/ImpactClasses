class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_set<int>sets(nums1.begin(),nums1.end());
        for(int num:nums2)
        {
           if(sets.count(num))
           {
            res.push_back(num);
            sets.erase(num);
           }
        }
        return res;
    }
};