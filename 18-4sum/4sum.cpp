class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<4){
            return {};
        }
        vector<vector<int>> v;
        for (int i = 0; i < n - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                int left = j + 1;
                int right = n - 1;
                while (left < right)
                {
                    long long s = (long long) nums[left] + nums[right] + nums[i] + nums[j];
                    if (s == target)
                    {
                        v.push_back({nums[left], nums[right], nums[i], nums[j]});
                        left++;
                        right--;

                        while (left < n && nums[left] == nums[left - 1])
                        {
                            left++;
                        }
                        while (right >= 0 && nums[right] == nums[right + 1])
                        {
                            right--;
                        }
                    }
                    else if (s < target)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
            }
        }
        return v;
    }
};