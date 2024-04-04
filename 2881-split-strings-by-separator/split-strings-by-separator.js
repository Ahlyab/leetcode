/**
 * @param {string[]} words
 * @param {character} separator
 * @return {string[]}
 */
var splitWordsBySeparator = function(words, separator) {
    let res = [];
    words.forEach((word)=> {
        let temp = word.split(separator);
        temp.forEach((item) => {
            if(item != ""){
            res.push(item);
            }
        })
    });
    return res;
};