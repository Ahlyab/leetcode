/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var findDegrees = function(matrix) {
    let count = [];
    for(let i=0; i<matrix.length; ++i) {
        let temp = 0;
        for(let j=0; j<matrix[i].length; ++j) {
            if(matrix[i][j] != 0) {
                ++temp;
            }
        }
        count.push(temp);
    }
    return count;
};