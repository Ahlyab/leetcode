/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function (nums, fn, init) {
  for (let index in nums) {
    init = fn(init, nums[index]);
  }
  return init;
};
