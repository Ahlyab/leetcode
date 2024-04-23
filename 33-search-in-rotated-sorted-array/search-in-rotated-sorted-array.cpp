class Solution {
public:
    int search(vector<int>& nums, int target) {
        return Binarysearch(nums, 0, nums.size()-1, target);
    }

    int Binarysearch(vector<int>& arr, int l, int h, int key)
    {
    if (l > h)
        return -1;
 
    int mid = (l + h) / 2;
    if (arr[mid] == key)
        return mid;
 
    /* If arr[l...mid] is sorted */
    if (arr[l] <= arr[mid]) {
        /* As this subarray is sorted, we can quickly
        check if key lies in half or other half */
        if (key >= arr[l] && key <= arr[mid])
            return Binarysearch(arr, l, mid - 1, key);
        /*If key not lies in first half subarray,
           Divide other half  into two subarrays,
           such that we can quickly check if key lies
           in other half */
        return Binarysearch(arr, mid + 1, h, key);
    }
 
    /* If arr[l..mid] first subarray is not sorted, then
    arr[mid... h] must be sorted subarray */
    if (key >= arr[mid] && key <= arr[h])
        return Binarysearch(arr, mid + 1, h, key);
 
    return Binarysearch(arr, l, mid - 1, key);
}
};