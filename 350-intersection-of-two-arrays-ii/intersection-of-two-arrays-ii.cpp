class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>res;
       unordered_map<int,int>maps;
       for(auto num:nums1)
       {
        maps[num]++;
       }
       for(int num:nums2)
       {
        if(maps[num]>0)
        {
            res.push_back(num);
            maps[num]--;
        }
       }
       return res;
    }
};