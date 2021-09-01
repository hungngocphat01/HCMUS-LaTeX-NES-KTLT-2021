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
    // tach so chan
    int newData1;
    int newData2;
    Node* newNode1;
    Node* newNode2;
    Node* prevNode = NULL;
    Node* nextNode;
    Node* node = list.head;
    while (node != NULL) {
        nextNode = node->next;
        if (node->data % 2 == 0) {
            newData1 = node->data / 2;

            if (prevNode != NULL)List_removeAfterNode(list, prevNode);
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
        else {
            prevNode = node;
            node = nextNode;
        }
    }

    // loai node trung nhau lien tiep
    int lastData = -1;
    prevNode = NULL;
    nextNode;
    node = list.head;
    while (node != NULL) {
        if (node->data == lastData) {
            nextNode = node->next;
            List_connectNode(prevNode, nextNode);
            List_deleteNode(node);
            node = nextNode;
        }
        else {
            lastData = node->data;
            prevNode = node;
            node = node->next;
        }
    }
}