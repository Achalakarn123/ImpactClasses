class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int n=nums.size();
        int res=INT_MAX;
        long long sum=0;
      //  int len=0;
        while(high<n){
            sum=sum+nums[high];
            while(sum>=target){
                int len=high-low+1;
                res=min(res,len);
                sum-=nums[low];
                low++;
            }
                high++;
        }
        return res == INT_MAX ? 0 : res;
    }
};