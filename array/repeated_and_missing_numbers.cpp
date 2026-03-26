class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
	    vector<int> ans(2);
        vector<int> counter(n*n + 1, 0);
        vector<bool> missing(n*n + 1, false);
        missing[0] = true;
	
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) {
                // repeated number
                counter[grid[i][j]] += 1;
                if(counter[grid[i][j]] > 1) {
                    ans[0] = grid[i][j];
                }
                // checks a number either missing or not
                missing[grid[i][j]] = true;
            }
        }
        // missing number
        for(int m = 1; m <= n*n; m++) {
            if(missing[m] == false) {
                ans[1] = m;
            }
        }
        return ans;
    }
};
