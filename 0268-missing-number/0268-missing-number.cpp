class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int m = nums.size();
 
    // get a sum of integers between 1 and `n+1`
    int total = m*(m + 1)/2;
 
    // get an actual sum of integers in the array
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
 
    // the missing number is the difference between the expected sum
    // and the actual sum
    return total - sum;
    }
};