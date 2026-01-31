class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int maxElem=nums.front();
        int minElem=nums.back();
        return gcd(maxElem,minElem);
    }
};