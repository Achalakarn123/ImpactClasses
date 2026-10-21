class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        
        // what to do
      
        //1)1st check the occurances then
        //2)if there are more than 2 recurring elements then just write two same only then write other element
        
    //     if(nums.size() <= 2) return nums.size();

    //     int j=2;
    //     for(int i=2;i<nums.size();i++)
    //     {
    //         if(nums[i] != nums[j-2])
    //         {
    //             nums[j]=nums[i];
    //             j++;
    //         }
    //     }
    //     return j;
    // }
   if (nums.size() <= 2) return nums.size();
   int cm=2;
   int off=2;
   while(cm<nums.size()){
    if(nums[cm]==nums[off-2]){
        cm++;
        continue;
    }
    nums[off]=nums[cm];
    off++;
    cm++;
   }
 return off;























    }
};