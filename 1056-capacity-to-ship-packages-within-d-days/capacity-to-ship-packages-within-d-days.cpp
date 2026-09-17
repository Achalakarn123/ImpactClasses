class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int su:weights){
            high+=su;
        }
        while(low<=high){

           int mid=low+(high-low)/2;
           int currWeight=0;
           int daysNeeded=1;
           for(int weight:weights){
               if(currWeight+weight>mid){
                 daysNeeded++;
                 currWeight=weight;
               }
               else{
                currWeight+=weight;
               }
           }
           if(daysNeeded<=days){
            high=mid-1;
           }
           else{
            low=mid+1;
           }
        }
        return low;
    }
};
