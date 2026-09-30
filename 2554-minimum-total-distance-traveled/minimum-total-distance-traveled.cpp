class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        //Sorting
        sort(robot.begin(),robot.end());
        sort(factory.begin(),factory.end());
        int n=robot.size();
        int m=factory.size();

        //DP table
        long long const INF=1e18;
        vector<vector<long long>>dp(n+1,vector<long long>(m+1,INF));

        //Base Case
        for(int j=0;j<=m;j++){
            dp[0][j]=0;
        }
        
        for(int j=1;j<=m;j++){
            int pos=factory[j-1][0];
            int limit=factory[j-1][1];
            // Consider first i robots
            for (int i = 1; i <= n; i++) {
                // k = 0 → skip current factory
                dp[i][j] = dp[i][j - 1];
                long long currCost = 0;
                // k = 1, 2, 3...
                for (int k = 1; k <= limit && k <= i; k++) {
                    currCost += abs(robot[i - k] - pos);
                    dp[i][j] = min(
                        dp[i][j],
                        dp[i - k][j - 1] + currCost
                    );
                }
            }
        }
        return dp[n][m];
    }
};