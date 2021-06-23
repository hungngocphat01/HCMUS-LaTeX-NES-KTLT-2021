// Hàm đệ quy sort
void recursiveSelectionSort(Node*& head) {
    if (head == nullptr) {
        return;
    }
    // Node tại đó chứa giá trị nhỏ nhất
    Node* minNode = head;
    // Node nằm trước node min (để tí nữa ta swap cho tiện)
    Node* beforeMinNode = nullptr;
    // Tìm node chứa GTNN (và node nằm trước node đó)
    for (Node* p = head; p->next != nullptr; p = p->next) {
        if (p->next->data < minNode->data) {
            beforeMinNode = p;
            minNode = p->next;
        }
    }
    // Swap node chứa GTNN và head cho nhau
    if (head != minNode) {
        Node* tmp = head->next;
        head->next = minNode->next;
        // Nếu minNode là node kế sau head
        if (minNode != tmp) {
            minNode->next = tmp;
            beforeMinNode->next = head;
        }
        // Các TH còn lại
        else {
            minNode->next = head;
        }
        head = minNode;
    }
    // Gọi đệ quy sắp xếp phần mảng còn lại
    recursiveSelectionSort(head->next);
}