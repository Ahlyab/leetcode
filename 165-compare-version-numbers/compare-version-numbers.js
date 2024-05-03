/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function(version1, version2) {
    const s1 = version1.split('.');
    const s2 = version2.split('.');

    const maxLength = Math.max(s1.length, s2.length);

    for(let i = 0; i<maxLength; ++i) {
        const v1 = i < s1.length ? parseInt(s1[i]) : 0;
        const v2 = i < s2.length ? parseInt(s2[i]) : 0;

        if(v1 > v2) {
            return 1;
        }else if(v1 < v2) {
            return -1;
        }
    }
        return 0;
};

