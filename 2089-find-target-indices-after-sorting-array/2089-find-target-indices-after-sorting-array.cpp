class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        // int i = 0;
        // int j = nums.size()-1;
        vector<int> temp;
        
//         while(i<j){
//             int mid = i + (j-i)/2;
//             if(nums[mid] == target){
//                 if(nums[mid-1] == target){
//                     temp.push_back(mid-1);
//                     temp.push_back(mid);
                    
//                 }
//                 else if(nums[mid+1] == target){
//                     temp.push_back(mid+1);
//                     temp.push_back(mid);
                    
//                 }
//                 else{
//                      temp.push_back(mid);
//                 }
//                 return temp;
//             }
//             else if(nums[mid] > target){
//                 j = mid - 1;
//             }
//             else{
//                 i = mid + 1;
//             }
//         }
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                temp.push_back(i);
            }
        }
        return temp;
    }
};