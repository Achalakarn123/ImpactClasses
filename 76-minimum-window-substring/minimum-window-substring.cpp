class Solution {
public:
    
    bool sahi(vector<int>& have , vector<int>& needed){
        for(int i=0;i<256;i++){
            if(have[i]<needed[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n=s.size();
        int low=0;
        int high=0;
        int res=INT_MAX;
        int start=0;
        vector<int>have(256,0);
        vector<int>needed(256,0);
        for(char c : t) {
                needed[c]++;
         }
        for(high=0;high<n;high++){
           have[s[high]]++;
           while(sahi(have,needed)){
              int len=high-low+1;
              if(res>len){
                res=len;
                start=low;
              }
              have[s[low]]--;
              low++;
           }
        }
        if(t.size()==0 || res==INT_MAX) return "";
        return s.substr(start,res);
    }
};