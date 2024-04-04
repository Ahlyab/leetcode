/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let trimmed = s.trim();
    let arr = trimmed.split(' ');
    return arr[arr.length - 1].length;
};