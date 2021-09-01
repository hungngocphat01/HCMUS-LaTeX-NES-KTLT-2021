void List_deleteNode(Node* node) {
    delete node;
}

void List_connectNode(Node*nodeA, Node*nodeB) {
    if (nodeA != NULL) nodeA->next = nodeB;
}

Node* List_initNode(int data) {
    Node* node = new Node;
    node->data = data;
    return node;
}

void List_removeHead(List &list) {
    if (List_isEmpty(list)) return;

    Node* newHead = list.head->next;
    List_deleteNode(list.head);
    list.head = newHead;
}

void List_removeAfterNode(List &list, Node*targetNode) {
    if (List_isEmpty(list)) return;
    if (targetNode == NULL || targetNode->next == NULL) return;

    Node* newNodeAfter = targetNode->next->next;
    List_deleteNode(targetNode->next);
    List_connectNode(targetNode, newNodeAfter);
}

void makeOdd(List& list) {
    // Đoạn code tách số chẵn
    int newData1;// Lưu giá trị số lẻ thứ nhất sau khi tách
    int newData2;// Lưu giá trị số lẻ thứ hai sau khi tách
    Node* newNode1;// Node số lẻ thứ nhất sau khi tách
    Node* newNode2;// Node số lẻ thứ hai sau khi tách

    // Bộ 3 biến prevNode, nextNode, node thường được đi chung trong
    // những thao tác duyệt từng node trong List phức tạp (Cần xóa hay thêm node)
    Node* prevNode = NULL;// Lưu node trước của node đang duyệt
    Node* nextNode;// Lưu node kế tiếp cần duyệt
    Node* node = list.head;// Node cần duyệt
    while (node != NULL) {
        nextNode = node->next;
        if (node->data % 2 == 0) {// Nếu là node là số chẵn
            newData1 = node->data / 2;

            // Xóa node số chẵn đang duyệt
            if (prevNode != NULL) List_removeAfterNode(list, prevNode);
            else List_removeHead(list);

            if (newData1 % 2 != 0)
            {
                newData2 = newData1;
            }
            else {
                newData1 = newData1-1;
                newData2 = newData1+2;
            }

            newNode1 = List_initNode(newData1);
            newNode2 = List_initNode(newData2);
            List_connectNode(newNode2, nextNode);
            List_connectNode(newNode1, newNode2);
            if (prevNode != NULL) List_connectNode(prevNode, newNode1);
            else list.head = newNode1;

            prevNode = newNode2;
            node = nextNode;
        }
        else {// Ngược lại, nếu là node là số lẻ
            prevNode = node;
            node = nextNode;
        }
    }

    // Loại node trùng nhau liên tiếp
    // Tận dụng lại 3 biến prevNode, nextNode, node
    prevNode = NULL;
    nextNode;
    node = list.head;
    while (node != NULL) {
        if (prevNode!=NULL && node->data == prevNode->data) {
            nextNode = node->next;
            List_connectNode(prevNode, nextNode);
            List_deleteNode(node);
            node = nextNode;
        }
        else {
            prevNode = node;
            node = node->next;
        }
    }
}