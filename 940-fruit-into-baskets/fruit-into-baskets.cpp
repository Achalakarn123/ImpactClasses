class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int low=0;
        int high=0;
        int res=INT_MIN;
        int k =2;
        map<int,int> f;
        while(high<n)
        {
          // int k=high-low+1;
           f[fruits[high]]++;
           while(f.size()>k)
           {
             f[fruits[low]]--;
             if(f[fruits[low]]==0)
             {
                  f.erase(fruits[low]);
             }
             low++;
           }
           int len=high-low+1;
           res=max(res,len);
           high++;
        }
        return res==INT_MIN?-1:res;
    }
};