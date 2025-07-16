#include<algorithm>
class Solution {
public:
   
    int maxSubArray(vector<int>& nums) 
    {
        //kadanes algorithm says ki jaha appan sab k value negative hoixai waha sum=0 rakhake and current sum and maximum sum chalabake saath me where current sum(cs=0) and maximum sum(ms=infinity)
    int ms=nums[0];
    int cs=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        cs=max(nums[i],cs + nums[i]);
        ms=max(ms,cs);
    }
   return ms;
    }
};