class MyQueue {
public:
    stack<int> son1, son2;
    MyQueue() {}
    void push(int x) {
        while (!son1.empty()) {
            son2.push(son1.top());
            son1.pop();
        }
        son1.push(x);
        while (!son2.empty()) {
            son1.push(son2.top());
            son2.pop();
        }
    }
    int pop() {
        int temp = son1.top();
        son1.pop();
        return temp;
    }
    int peek() {
        return son1.top();
    }
    bool empty() {
        return son1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
