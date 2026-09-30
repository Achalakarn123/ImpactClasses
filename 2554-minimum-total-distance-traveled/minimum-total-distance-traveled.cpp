class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot,
                                   vector<vector<int>>& factory) {

        // Sort robots and factories
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        int n = robot.size();
        int m = factory.size();

        // DP table
        const long long INF = 1e18;

        vector<vector<long long>> dp(
            n + 1,
            vector<long long>(m + 1, INF)
        );

        // 0 robots = 0 distance
        for (int j = 0; j <= m; j++) {
            dp[0][j] = 0;
        }

        // Consider each factory
        for (int j = 1; j <= m; j++) {

            // Consider first i robots
            for (int i = 1; i <= n; i++) {

                long long currentCost = 0;

                // Try giving k robots to current factory
                for (int k = 0;
                     k <= factory[j - 1][1] && k <= i;
                     k++) {

                    // Add cost of the last k robots
                    if (k > 0) {
                        currentCost += llabs(
                            (long long)robot[i - k]
                            - factory[j - 1][0]
                        );
                    }

                    // Previous factories handle i-k robots
                    dp[i][j] = min(
                        dp[i][j],
                        dp[i - k][j - 1] + currentCost
                    );
                }
            }
        }

        return dp[n][m];
    }
};