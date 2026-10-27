class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int n=nums.size();
        vector<int>sorted=nums;
        sort(nums.begin(),nums.end());
        while(low<n && nums[low]==sorted[low]){
            low++;
        }
        while(high>=0 && nums[high]==sorted[high]){
            high--;
        }
        if(low>=high) return 0;
        return high-low+1;
    }
};