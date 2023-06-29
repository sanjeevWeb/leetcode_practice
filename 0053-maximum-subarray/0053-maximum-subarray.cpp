class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxPro = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            maxPro = max(sum,maxPro);
            if(sum<0){
                sum = 0;
            }
        }
        return maxPro;
    }
};