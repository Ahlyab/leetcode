/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
  let res = [];
  for (let index in arr) {
    if (
      fn(arr[index], parseInt(index)) == true ||
      fn(arr[index], parseInt(index)) != 0
    ) {
      res.push(arr[index]);
    }
  }
  return res;
};
