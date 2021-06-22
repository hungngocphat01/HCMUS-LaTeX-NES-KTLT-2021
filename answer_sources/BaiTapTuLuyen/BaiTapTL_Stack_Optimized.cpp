struct QueueFS {
    stack<int> st1;
    stack<int> st2;
    int top;
}

void enqueue(QueueFS& q, int x) {
    if (q.empty()) {
        top = x;
    }
    q.st1.push(x);
}

int top(QueueFS& q) {
    // Nếu như queue không rỗng (stack 1 không rỗng), trả về top
    if (!q.st1.empty()) {
        return q.top;
    }
    else {
        cout << "Queue rong!" << endl;
        return 0;
    }
}

void dequeue(QueueFS& q) {
    // Pop 1 bỏ sang 2
    while (!q.st1.empty()) {
        int t = q.st1.top();
        q.st2.push(t);
    }
    
    // Vứt giá trị ở đỉnh stack 2 đi
    q.st2.pop();
    
    // Nếu queue không rỗng (stack 2 không rỗng), đỉnh queue là đỉnh stack 2
    if (!q.st2.empty()) {
        q.top = q.st2.top();
    }
    
    // Pop 2 bỏ sang 1
    while (!q.st2.empty()) {
        int t = q.st2.top();
        q.st1.push(t);
    }
}