//https://leetcode.com/problems/maximum-profit-in-job-scheduling/description/?envType=daily-question&envId=2024-01-06

#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    using int3 = array<int, 3>;
    vector<int3> jobs; // (startTime, endTime, profit)
    vector<int> dp;
    int n;
    vector<int> next;

   void binary_search() {
        for (int i = 0; i < n; i++) {
            // Be careful
            next[i] = upper_bound(jobs.begin()+i, jobs.end(),
                array<int, 3>{jobs[i][1], 0, 0}) - jobs.begin();
        //    cout << i << "->" << next[i] << endl;
        }
    }

    int dfs(int i) {
        if (i == n ) return 0;
        if (dp[i]!= -1) return dp[i];

        // take the job i
        int profit_w_i = jobs[i][2] + dfs(next[i]);

        // Skip the job i
        int profit_n_i = dfs(i+1);

        // Choose the maximum of profit_w_i & profit_n_i
        return dp[i] = max(profit_w_i, profit_n_i);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) 
    {
        n = startTime.size();
        jobs.assign(n, {-1, -1, -1});
        for (int i = 0; i < n; i++)
            jobs[i] = {startTime[i], endTime[i], profit[i]};

        sort(jobs.begin(), jobs.end());
        // Initialize the 'next' vector with the correct size
        next.assign(n, -1);

        dp.assign(n+1, -1);
        binary_search();
        return dfs(0);
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
