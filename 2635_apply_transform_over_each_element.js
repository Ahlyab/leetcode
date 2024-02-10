/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
  let res = [];
  for (let index in arr) {
    res.push(fn(arr[index], parseInt(index)));
  }
  return res;
};
