class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>set1(nums1.begin(),nums1.end());
        set<int>set2(nums2.begin(),nums2.end());
        vector<int>v;
        // set_intersection (nums1.begin(),nums1.end(),nums2.begin(),nums2.end(), back_inserter(v));
        set_intersection (set1.begin(),set1.end(),set2.begin(),set2.end(), back_inserter(v));
        return v;
    }
};