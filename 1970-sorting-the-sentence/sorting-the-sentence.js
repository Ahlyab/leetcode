/**
 * @param {string} s
 * @return {string}
 */
var sortSentence = function(s) {
    let result = "";
    for(let i=1; i<=9; ++i) {
        const regex = new RegExp(`\\b[a-zA-Z]+\\d*${i}\\b`, "g");
        const words = s.match(regex) || [];
        result += words && words[0] ? `${words[0].split(`${i}`)[0]} ` : "";
    }
    return result.trim()
};