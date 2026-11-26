var promiseAll = function (functions) {
    return new Promise((resolve, reject) => {
        const results = new Array(functions.length);
        let remaining = functions.length;

        functions.forEach((fn, index) => {
            fn().then(value => {
                results[index] = value;
                remaining--;

                if (remaining === 0) {
                    resolve(results);
                }
            }, reject);
        });
    });
};