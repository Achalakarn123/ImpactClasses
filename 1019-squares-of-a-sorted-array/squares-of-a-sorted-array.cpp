class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        if(neg.size()==0){
//all are positive so lets do square and return as they are in increasing order after square
            for(int i=0;i<pos.size();i++)
            {
                pos[i]=pos[i]*pos[i];
            }
            return pos;
        }
        if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        for(int i=0;i<pos.size();i++)
        {
            pos[i]=pos[i]*pos[i];
        }
        for(int i=0;i<neg.size();i++)
        {
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
        int m=pos.size();
        int n=neg.size();
        int id=0;
        int i=0;
        int j=0;
        vector<int>res(m+n);
        while(i<m && j<n){
            if(neg[j]<pos[i]){
                res[id]=neg[j];
                id++;
                j++;
            }
            else{
                res[id]=pos[i];
                id++;
                i++;
            }
        }
        while(i<m){
            res[id]=pos[i];
            id++;
            i++;
        }
        while(j<n){
            res[id]=neg[j];
            id++;
            j++;
        }
        return res;
    }
};