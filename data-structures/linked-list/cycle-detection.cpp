/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

Using the constraint that the list's length cannot exceed 100 items

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node* currentNode = head;
    int length = 0;
    while(currentNode != NULL)
    {
        currentNode = currentNode->next;
        length++;
        if(length > 100)
        {
            return true;    
        }
    }
    return false;
}
