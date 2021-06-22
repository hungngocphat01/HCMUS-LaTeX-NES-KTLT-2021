Node* initNode(int data) {
    Node* node = new Node;
    node->data = data;
    return node;
}

void deleteNode(Node* node) {
    delete node;
}
    
void connectNode(Node* backNode, Node* frontNode) {
    if (backNode == NULL) return;
    backNode->next = frontNode;
}

void makeOdd(List& list) {
    // tách số chẵn
    int tmp;
    Node* tmpNode;
    for (Node* node = list.head; node != NULL; node = node->next) {
        if (node->data % 2 != 0) continue;
        tmp = node->data / 2;
        if (tmp % 2 != 0) node->data = tmp;
        else {
            node->data = tmp - 1;
            tmpNode = initNode(tmp + 1);
            connectNode(tmpNode, node->next);
            connectNode(node, tmpNode);
        }
    }

    // loại node trùng nhau liên tiếp
    int lastData = -1;
    Node* prevNode = NULL;
    Node* nextNode;
    Node* node = list.head;
    while (node != NULL) {
        if (node->data == lastData) {
            nextNode = node->next;
            connectNode(prevNode, nextNode);
            deleteNode(node);
            node = nextNode;
        }
        else {
            lastData = node->data;
            prevNode = node;
            node = node->next;
        }
    }
}