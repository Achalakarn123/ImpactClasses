class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //fixed window size
        int low=0;
        int k=s1.size();
        int n=s2.size();
        if(k>n) return false;
        int high=k-1;
        vector<int>have(256,0);
        vector<int>needed(256,0);
        for(auto c : s1){
            needed[c]++;
        }
        for(int i=low;i<=high;i++){
            have[s2[i]]++;
        }
        if (have == needed) return true;
        while(high<n-1){
            have[s2[low]]--;

            low++;
            high++;
            have[s2[high]]++;
            if (have == needed) return true;
        }
       // if(have==needed) return true;
        return false;
    }
};