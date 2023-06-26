class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> plus;
        vector<int> minus;
        // int initialVal = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                plus.push_back(nums[i]);
            }
            else{
                minus.push_back(nums[i]);
            }
        }
        
        // vector<int> answer;
        // int j = 0;
        for(int i=0;i<plus.size();i++){
            nums[2*i] = plus[i];
            nums[2*i+1] = minus[i];
        }
        return nums;
    }
};