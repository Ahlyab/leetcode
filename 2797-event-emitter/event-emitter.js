class EventEmitter {
    constructor() {
        this.events = new Map();
    }

    subscribe(eventName, callback) {
        if (!this.events.has(eventName)) {
            this.events.set(eventName, new Set());
        }

        const listeners = this.events.get(eventName);
        listeners.add(callback);

        return {
            unsubscribe: () => {
                listeners.delete(callback);
            }
        };
    }

    emit(eventName, args = []) {
        const listeners = this.events.get(eventName);

        if (!listeners) {
            return [];
        }

        return Array.from(listeners, callback => callback(...args));
    }
}