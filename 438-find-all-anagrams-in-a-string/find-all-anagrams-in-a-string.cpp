class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        int n=s.size();
        int k=p.size();
        int low=0;
        int high=k-1;
        vector<int>have(256,0);
        vector<int>needed(256,0);
        for(auto c : p){
            needed[c]++;
        }
        if (k > n) return v;
        for(int i=low;i<=high;i++){
            have[s[i]]++;
        }
        
        if(have==needed){
            v.push_back(low);
        }
        while(high<n-1){
            have[s[low]]--;
            low++;
            high++;
            have[s[high]]++;
            if(have==needed) {
                v.push_back(low);
            }
        }
        return v;
    }
};