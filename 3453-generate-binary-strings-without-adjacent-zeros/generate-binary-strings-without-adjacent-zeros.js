/**
 * @param {number} n
 * @return {string[]}
 */
var validStrings = function(n) {
    const end = Math.pow(2, n)-1;
    let result = [];

    for(let i=0; i<= end; ++i) {
        const testString = i.toString(2).padStart(n, '0');
        if(!hasAdjacentZeros(testString)) {
            result.push(testString);
        }
    }

    return result;
};

function hasAdjacentZeros(str) {
  return str.includes('00');
}

