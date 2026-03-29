class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        
        // what to do
      
        //1)1st check the occurances then
        //2)if there are more than 2 recurring elements then just write two same only then write other element
        
       if (nums.size() <= 2) return nums.size();
        
        int j = 2; // 'j' is the pointer for the position we are filling
        for (int i = 2; i < nums.size(); i++) {
            // If current element is different from the element 2 spots back
            // it means we haven't seen more than two of this number yet.
            if (nums[i] != nums[j - 2]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j; // 'j' is the
    }
};