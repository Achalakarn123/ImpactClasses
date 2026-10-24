class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int high=0;
        int low=0;
        double res=-DBL_MAX;
        while(high<nums.size()){
            int len=high-low+1;
            sum+=nums[high];
            while(len>k){
                sum -= nums[low];
                low++;
                len=high-low+1;
            }
            if(high-low+1==k){
              double avg=(double)sum/k;
              res=max(res,avg);
            }
        high++;  
        }
        return res;
    }
};