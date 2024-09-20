class MyStack {
public:
    queue<int> s;
    MyStack() {}
    void push(int x) {
        s.push(x);
        for (int i = 0; i < s.size() - 1; i++) {
            s.push(s.front());
            s.pop();
        }
    }
    int pop() {
        int temp = s.front();
        s.pop();
        return temp;
    }
    int top() {
        int temp = s.front();
        return temp;
    }
    bool empty() {
        return s.size() < 1;
    }
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
