function isIsomorphic(s: string, t: string): boolean {
    if(s.length !== t.length) return false;

    let mapSToT = {};
    let mapTToS = {};
    for(let i=0; i<s.length; ++i) {
        if((mapSToT[s[i]] && mapSToT[s[i]] != t[i]) || (mapTToS[t[i]] && mapTToS[t[i]] !== s[i]) ) {
            return false;
        }
        mapSToT[s[i]] = t[i];
        mapTToS[t[i]] = s[i];


    }
    return true;
};

