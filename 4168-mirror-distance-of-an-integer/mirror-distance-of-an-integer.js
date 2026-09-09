
const reverseDigits = (number) => {
    return Number(String(number).split('').reverse().join(''))
}

/**
 * @param {number} n
 * @return {number}
 */
var mirrorDistance = function(n) {
    return Math.abs(n- reverseDigits(n))
};