class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int sum=0;
        int left=0;
        int n=people.size();
        int right=n-1;
        while(left<=right){
            if((people[left]+people[right])<=limit){
                left++;
            }
            right--;
            sum++;
        }
        return sum;
    }
};