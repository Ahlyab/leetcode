/**
 * @param {number[]} digits
 * @return {number}
 */
var totalNumbers = function(digits) {
    const result = new Set();

    function backtrack(path, used) {
        // We have formed a 3-digit number
        if (path.length === 3) {
            if (path[0] !== 0 && path[2] % 2 === 0) {
                const num = path[0] * 100 + path[1] * 10 + path[2];
                result.add(num);
            }
            return;
        }

        for (let i = 0; i < digits.length; i++) {
            if (used[i]) continue;

            used[i] = true;
            path.push(digits[i]);

            backtrack(path, used);

            path.pop();
            used[i] = false;
        }
    }

    backtrack([], []);

    return result.size;
};