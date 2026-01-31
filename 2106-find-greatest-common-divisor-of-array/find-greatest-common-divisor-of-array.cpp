class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int maxElem=nums.back();
        int minElem=nums.front();
        while(minElem!=0)
        {
         int temp=minElem;
         minElem=maxElem%minElem;
         maxElem=temp;
        }
        return maxElem;
    }
};

