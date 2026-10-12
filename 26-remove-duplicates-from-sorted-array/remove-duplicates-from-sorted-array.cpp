class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int off=0;
        int cm=1;
        int res=1;
        while(cm<nums.size()){
            if(nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            //----------unique found
            nums[off+1]=nums[cm];
            off+=1;
            res+=1;
            cm++;
        }
        return res;
    }
};