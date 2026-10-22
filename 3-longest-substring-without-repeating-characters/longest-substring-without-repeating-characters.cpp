class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int res=0;
        map<char,int>f;
        int low=0;
        int high=0;
        while(high<n){
            int len=high-low+1;
            f[s[high]]++;
            while(f.size()<len){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
                len=high-low+1;
            }
            len=high-low+1;
            res=max(res,len);
            high++;
        }
        return res;
    }
};