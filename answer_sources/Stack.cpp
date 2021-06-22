bool checkBracketPairs(string s) {
    stack<char> history;
    
    // Ta duyệt qua từng kí tự 
    for (char c : s) {
        // Nếu ta gặp dấu mở ngoặc thì push vào stack
        if (c == '(' || c == '[' || c == '{') {
            history.push(c);
        }
        // Nếu ta gặp dấu đóng ngoặc
        else if (c == ')' || c == ']' || c == '}') {
            // Nếu dấu đóng ngoặc đó không phải đồng loại 
            // của dấu mở ngoặc trên đỉnh stack -> sai
            if (history.empty() || !sameType(history.top(), c) {
                return false;
            }
        } 
    }
    
    // Nếu ta đã duyệt hết chuỗi rồi mà trong stack vẫn còn
    // dư phần tử -> sai
    if (!history.empty()) {
        return false;
    }
    
    // Nếu không sai thì là đúng :)
    return true;
}

// Hàm kiểm tra xem một cặp ngoặc có cùng loại hay không
bool sameType(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '[' && close == ']') return true;
    if (open == '{' && close == '}') return true;
    return false;
}