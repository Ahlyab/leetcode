/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function(nums) {
    let sum_nums = 0;
    let sum_digits = 0;

    for(let i=0; i<nums.length; ++i) {
        sum_nums += nums[i];
        sum_digits += sumOfDigits(nums[i]);
    }

    return Math.abs(sum_nums  - sum_digits);
};

const sumOfDigits = (num) => {
    let sum = 0;
    while(num > 0) {
        sum += (num%10);
        num = Math.floor(num/10);
    }
    return sum;
}