class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {}
    
    /** Push element x to the back of the queue. */
    void push(int x) {
        // Push to the inStack
        inStack.push(x);
    }
    
    /** Removes the element from the front of the queue and returns it. */
    int pop() {
        // Move elements from inStack to outStack if outStack is empty
        moveElements();
        
        // Pop and return the front element from outStack
        if (!outStack.empty()) {
            int front = outStack.top();
            outStack.pop();
            return front;
        }
        
        // Handle empty queue case
        throw std::runtime_error("Queue is empty");
    }
    
    /** Get the front element. */
    int peek() {
        // Move elements if outStack is empty
        moveElements();
        
        // Return the top element of outStack
        if (!outStack.empty()) {
            return outStack.top();
        }
        
        // Handle empty queue case
        throw std::runtime_error("Queue is empty");
    }
    
    /** Returns true if the queue is empty, false otherwise. */
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
    
private:
    // Stack to hold elements to be added (FIFO order)
    std::stack<int> inStack;
    
    // Stack to hold elements for retrieval (LIFO order, reversed FIFO)
    std::stack<int> outStack;
    
    // Helper function to move elements from inStack to outStack for pop and peek
    void moveElements() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }
};
