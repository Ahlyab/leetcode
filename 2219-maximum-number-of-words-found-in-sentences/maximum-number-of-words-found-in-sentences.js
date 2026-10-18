/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
    const candidates = sentences.map(sentence => sentence.split(' ').length);
    return Math.max(...candidates);
};