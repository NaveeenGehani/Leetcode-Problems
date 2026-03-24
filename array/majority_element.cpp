class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count;
        int k;
        for(int i = 0; i < nums.size(); i++) {
            count = 0;
            k = nums[i];
            for(int j = 0; j < nums.size();j++) {
                if(nums[j] == k) {
                    count++;
                }
            }
            if(count > (nums.size() / 2) ) {
                return k;
            }
        }
        return -1;
    }
};
