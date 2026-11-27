/**
 * @param {number[]} heights
 * @return {number}
 */
var heightChecker = function(heights) {
    const values = heights.map(value => value);
    // sort heights
    const expected = heights.sort((a,b) => a-b);
    let count =0;
    for(let i=0; i<values.length; ++i) {

        if(values[i] != expected[i]) {
            ++count;
        }
    }
    return count;
};