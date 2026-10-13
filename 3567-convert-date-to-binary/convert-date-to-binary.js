/**
 * @param {string} date
 * @return {string}
 */
var convertDateToBinary = function(date) {
    return date.split('-').map(n => parseInt(n, 10).toString(2)).join('-')
};