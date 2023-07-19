class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>output;
        int low = 0;
        int high = nums.size()-1;
        int index1 = -1,index2 = -1;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid] == target){
                index1 = mid;
                high = mid-1;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid] == target){
                index2 = mid;
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        output.push_back(index1);
        output.push_back(index2);
        return output;
    }
};