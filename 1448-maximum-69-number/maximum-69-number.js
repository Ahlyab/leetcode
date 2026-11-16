/**
 * @param {number} num
 * @return {number}
 */
var maximum69Number  = function(num) {
    let str = num.toString()
    let index = str.indexOf('6');
    return Number(index === -1 ? str : str.slice(0, index) + '9' + str.slice(index + 1))

};