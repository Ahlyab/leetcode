var join = function (arr1, arr2) {
    const byId = new Map();

    for (const obj of arr1) {
        byId.set(obj.id, obj);
    }

    for (const obj of arr2) {
        const existing = byId.get(obj.id);

        if (existing === undefined) {
            byId.set(obj.id, obj);
        } else {
            byId.set(obj.id, { ...existing, ...obj });
        }
    }

    return [...byId.values()].sort((a, b) => a.id - b.id);
};