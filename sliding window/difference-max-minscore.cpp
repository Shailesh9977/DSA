#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;
        
        sort(nums.begin(), nums.end());
        
        int minDiff = INT_MAX;
        
        for (int i = k - 1; i < nums.size(); i++) {
            int currentDiff = nums[i] - nums[i - k + 1];
            minDiff = min(minDiff, currentDiff);
        }
        
        return minDiff;
    }
};
