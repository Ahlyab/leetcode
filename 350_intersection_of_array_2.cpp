class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        for(int i=0; i<nums1.size(); ++i) {
            int c = count(nums2.begin(), nums2.end(), nums1[i]); 
            
            if(c > 0) {
                res.push_back(nums1[i]);
                nums2.erase(find(nums2.begin(), nums2.end(), nums1[i]));
            }
        }
        return res;
    }
};
