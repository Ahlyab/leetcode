/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function(s) {
    let vowels = {};
    let consonants = {};

    for(let i=0; i<s.length; ++i) {
        console.log(s[i], isVowel(s[i]))
       if (isVowel(s[i])) {
            vowels[s[i]] = (vowels[s[i]] || 0) + 1;
        } else {
            consonants[s[i]] = (consonants[s[i]] || 0) + 1;
        }
    }

    console.log(vowels, consonants);

    return Math.max(0,...Object.values(vowels)) + Math.max(0,...Object.values(consonants));
};

function isVowel(c) {
        return c==='a' || c==='e' || c==='i' || c==='o' || c==='u';
}