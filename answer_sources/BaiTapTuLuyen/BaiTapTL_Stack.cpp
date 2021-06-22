struct QueueFS {
    stack<int> st1;
    stack<int> st2;
};

void enqueue(QueueFS& q) {
    // Enqueue là push vào stack 1
    q.st1.push(x);
}

// Hàm lấy giá trị ở đỉnh queue
int peek(QueueFS& q, int x) {
    // Pop 1 mang sang 2
    while (!q.st1.empty()) {
        int t = q.st1.top();
        q.st2.push(t);
    }
    
    // Đỉnh queue chính là đỉnh stack 2
    int top = q.st2.top();
    
    // Pop 2 mang về 1
    while (!q.st2.empty()) {
        int t = q.st2.top();
        q.st1.push(t);
    }
    return top;
}

/* Hàm dequeue
Vì dequeue và peek là 2 công việc rất tốn kém, ta nên
đồng thời cho hàm dequeue trả về giá trị của đỉnh queue luôn
*/
int dequeue(QueueFS& q) {
    // Pop 1 mang sang 2
    while (!q.st1.empty()) {
        int t = q.st1.top();
        q.st2.push(t);
    }
    
    // Đỉnh queue chính là đỉnh stack 2
    int top = q.st2.top();
    // Bỏ đi phần tử ở đỉnh stack 2
    q.st2.pop();
    
    // Pop 2 mang về 1
    while (!q.st2.empty()) {
        int t = q.st2.top();
        q.st1.push(t);
    }
    return top;
}