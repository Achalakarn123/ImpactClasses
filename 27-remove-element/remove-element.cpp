class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        //{1,2,3,2,5,4,6}==>>{1,3,5,4,6,2,2}==>pass k=5 elements i.e. {1,3,5,4,6}
        int start=0;
        int end=nums.size()-1;
        int flag=0;
        while(start<=end)
        {
            if(nums[start]==val)
            {
                swap(nums[start],nums[end]);
                end--;
            }
            else
            {
                start++;
            }
        }
        return start;
    }
};