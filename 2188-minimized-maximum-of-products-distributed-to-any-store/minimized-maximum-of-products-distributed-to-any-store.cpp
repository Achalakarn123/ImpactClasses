class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
       int low=1;
       int high=*max_element(quantities.begin(),quantities.end());
       while(low<=high){
        int mid=low+(high-low)/2;
        int storesNeeded=0;
        for(auto quantity:quantities){
            storesNeeded+=(quantity+mid-1)/mid;
        }
        if(storesNeeded>n){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return low;
    }
};


