typedef struct ListNode{
    int intV;
    double doubleV;
    char* charPtr;
    struct ListNode* next;
}ListNode;

ListNode* createNode(int intV, double doubleV, char* charPtr){
    ListNode* newNode = (ListNode*) malloc (sizeof(ListNode));
    newNode->intV = intV;
    newNode->doubleV = doubleV;
    newNode->charPtr = charPtr;
    newNode->next = NULL;
    return newNode;
}

ListNode** getNodesArray(ListNode* head){
    int nodeCount = 0;
    ListNode* current = head;
    while(current != NULL){
        nodeCount++;
        current = current->next;
    }

    ListNode** nodeArray = (ListNode**) malloc (nodeCount* sizeof(ListNode*));

    current = head;
    for(int i = 0;i<nodeCount;i++){
        *(nodeArray+i) = current;
        current = current -> next;
    }
    return nodeArray;
}