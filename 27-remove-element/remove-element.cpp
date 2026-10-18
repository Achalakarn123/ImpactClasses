class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int off=0;
        // int count=0;
        int cm=0;
        //sort(nums.begin(),nums.end());
        while(cm<nums.size())
        {
            if(nums[cm]!=val){
            swap(nums[off],nums[cm]);
            // count++;
            off++;
            cm++;
            }
            else{
             cm++;
            }
        }
        // return count; count and off has same value so no need to use count 
        return off;
    }
};