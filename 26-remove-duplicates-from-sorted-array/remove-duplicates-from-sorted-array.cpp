class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int off=1;
        int cm=1;
        int res=1;
        while(cm<nums.size()){
            if(nums[cm]==nums[off-1]){
                cm++;
                continue;
            }
            //----------unique found
            nums[off]=nums[cm];
            off+=1;
            res+=1;
            cm++;
        }
        return off;
    }
};