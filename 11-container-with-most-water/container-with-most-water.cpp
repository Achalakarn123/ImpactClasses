class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int res=INT_MIN;
        int left=0;
        int right=n-1;
        while(left<right){
            int mini=min(height[left],height[right]);
            int dis=abs(left-right);
            res=max(res,dis*mini);
            if(height[left]==height[right]){
                left++;
                right--;
            }
            else if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            
        }
        return res;
    }
};