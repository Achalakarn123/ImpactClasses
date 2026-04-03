class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int sum=0;
        for(auto num=0;num<nums.size();num++)
        {
            sum=sum+nums[num];
            nums[num]=sum;
        }
        return nums;
    }
    
};