/**
 * @param {number[]} nums
 * @return {number[]}
 */
var separateDigits = function(nums) {
    let ans = [];
    for(let i=0; i<nums.length; ++i) {
        let n = nums[i];
        let temp = []
        while(n>0) {
            temp.push(n%10);
            n = Math.floor(n / 10)
        }
        temp.reverse()
        ans = [...ans, ...temp];
    }
    return ans;
};