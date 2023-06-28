class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posi;
        vector<int> negi;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0) posi.push_back(nums[i]);
            else negi.push_back(nums[i]);
        }
        
        // int first_ele = nums[0];
        for(int i=0;i<posi.size();i++){
            // if(i = 2*i) nums[i] = posi[i];
            // else if(i = 2*i+1) nums[i] = negi[i];
            nums[2*i] = posi[i];
            nums[2*i + 1] = negi[i];
        }
        
        return nums;
    }
};