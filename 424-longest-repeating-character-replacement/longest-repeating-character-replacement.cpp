class Solution {
public:

    int find(vector<int>&a){
       int maxC=INT_MIN;
       for(int i=0;i<256;i++){
        maxC=max(maxC,a[i]);
       }
       return maxC;
    }
    int characterReplacement(string s, int k) {
        vector<int>f(256,0);
        int n=s.length();
        int low=0;
        int high=0;
        int res=INT_MIN;
        for(high=0;high<n;high++){
            f[s[high]]++;
            int len=high-low+1;
            int maxCnt=find(f);
            int diff=len-maxCnt;
            while(diff>k){
                f[s[low]]--;
                low++;
                len=high-low+1;
                maxCnt=find(f);
                diff=len-maxCnt;
            }
            len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};