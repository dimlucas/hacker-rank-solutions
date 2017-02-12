/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    if(head == NULL) { return head; }
    Node* currentNode = head;
    while(currentNode->next != NULL)
    {
        Node* next = currentNode->next;
        currentNode->next = currentNode->prev;
        currentNode->prev = next;
        currentNode = next;
    }
    currentNode->next = currentNode->prev;
    currentNode->prev = NULL;
    return currentNode;
}
