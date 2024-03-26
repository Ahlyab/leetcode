class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n  = 1;
        sort(nums.begin(), nums.end());

        for(int num : nums) {
            if(!findNum(nums, n)) {
                return n;
            }else{
                ++n;
            }
        }   

        return n;
    }

    int findNum(vector<int>& nums, int target) {
  int left = 0;
  int right = nums.size() - 1;

  while (left <= right) {
    // calculate middle index using integer division to avoid overflow
    int middle = left + (right - left) / 2;

    if (nums[middle] == target) {
      return true;
    } else if (nums[middle] < target) {
      // search in the right half
      left = middle + 1;
    } else {
      // search in the left half
      right = middle - 1;
    }
  }

  // target not found
  return false;
}
};