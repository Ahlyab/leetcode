/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function(s) {
    let vowels = {};
    let consonants = {};

    for(let i=0; i<s.length; ++i) {
       if (isVowel(s[i])) {
            vowels[s[i]] = (vowels[s[i]] || 0) + 1;
        } else {
            consonants[s[i]] = (consonants[s[i]] || 0) + 1;
        }
    }


    return Math.max(0,...Object.values(vowels)) + Math.max(0,...Object.values(consonants));
};

function isVowel(c) {
        return c==='a' || c==='e' || c==='i' || c==='o' || c==='u';
}