/**
 * @param {string[]} words
 * @return {number}
 */
var maximumNumberOfStringPairs = function(words) {
    let count = 0;
    for(let word of words) {
        const reversed = word.split('').reverse().join('');
        if(words.includes(reversed) && word !== reversed) {
            ++count;
        }
    }
    return Math.floor(count/2);
};