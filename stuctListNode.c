#include<stdio.h>

typedef struct ListNode{
    int intValue;
    double doubleValue;
    char* charPtr;
    struct ListNode* next;
}ListNode;

ListNode* createNode(int intValue, double doubleValue, char* charPtr){
    ListNode* newNode = (ListNode*) malloc (sizeof(ListNode));
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->intValue = intValue;
    newNode->doubleValue = doubleValue;
    newNode->charPtr = charPtr;
    newNode->next = NULL;
    return newNode;
}

ListNode** getNodesArray(ListNode* head){
    int nodeCount = countNodes(head);
    if(nodeCount == 0){
        return NULL;
    }

    ListNode** nodeArray = (ListNode**) malloc (nodeCount * sizeof(ListNode*));
    if(nodeArray == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }

    ListNode* current = head;
    for(int i = 0;i<nodeCount;++i){
        nodeArray[i] = current;
        current = current->next;
    }

    return nodeArray;
}