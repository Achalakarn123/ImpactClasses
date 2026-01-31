class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int a=nums.back();//2  3
        int b=nums.front();//10 10
        while(a>0 && b>0)//2>0 && 10>0 4>0 && 10>0
        {// again 2>0 and so a=4 b=2  a=3 b=7 a=3 b=1 a=0 b=1
            if(a>b) a=a%b;//2>10 no 4>10? no  
            else b=b%a;//b=0 10>4  b=2
        }
        if(a==0) return b;
        return a;//2 ans 
    }
};

