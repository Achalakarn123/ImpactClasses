class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s (nums.begin(),nums.end());
        vector<int>result(s.begin(),s.end());
        sort(result.begin(),result.end());
        if(result.size()<3) return result[result.size()-1];
        return result[result.size()-3];
    }
};