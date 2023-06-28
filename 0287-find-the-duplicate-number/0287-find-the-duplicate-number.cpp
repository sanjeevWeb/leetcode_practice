class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         int ans;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i] == nums[j]){
//                     ans = nums[i];
//                     break;
//                 }
//             }
            
//         }
//         return ans;
        // vector<int> arr;
        // for(int i=0;i<nums.size();i++){
        //     arr[i] = nums[i];
        // }
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};