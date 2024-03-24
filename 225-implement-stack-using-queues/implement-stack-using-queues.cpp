class MyStack {
private:
    std::queue<int> queue1;
    std::queue<int> queue2;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        queue2.push(x);
        while (!queue1.empty()) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        queue1.swap(queue2);
    }
    
    int pop() {
        int topElement = queue1.front();
        queue1.pop();
        return topElement;
    }
    
    int top() {
        return queue1.front();
    }
    
    bool empty() {
        return queue1.empty();
    }
};