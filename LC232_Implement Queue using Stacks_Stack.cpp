class MyQueue {
public: // 实现的时候小心什么可以用，什么不能用。传统的栈操作可以用，比如pop push empty top。
    stack<int> sIn;
    stack<int> sOut;
    /** Initialize your data structure here. */
    MyQueue() { // 用两个栈实现一个队列，一个栈负责出，一个负责入。这样可以满足FIFO的要求。详细动画见reference 

    }
    
    /** Push element x to the back of queue. */
    void push(int x) { // 入操作很简单
        sIn.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(sOut.empty()){ // 出操作先看out空不空，空的话需要从in的stack加入元素，然后再出
            while(!sIn.empty()){
                sOut.push(sIn.top());
                sIn.pop();
            }
        }
        int res = sOut.top();
        sOut.pop();
        return res;
    }
    
    /** Get the front element. */
    int peek() {
        int result = this->pop(); // 直接调用
        sOut.push(result);
        return result;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return sIn.empty() && sOut.empty(); // 全空才空
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

 // reference https://mp.weixin.qq.com/s/P6tupDwRFi6Ay-L7DT4NVg