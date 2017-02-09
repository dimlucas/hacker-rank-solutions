/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void MergeNode(Node** listNode, Node** currentNode)
{
    (*currentNode)->next = (*listNode);
    *currentNode = *listNode;
    *listNode = (*listNode)->next;
}

Node* MergeLists(Node *headA, Node* headB)
{
    Node* nodeA = headA;
    Node* nodeB = headB;
    Node* head = new Node;
    head->data = 0;
    head->next = NULL;
    Node* currentNode;
    currentNode = head;
    while( (nodeA != NULL) || (nodeB != NULL) )
    {
        if( (nodeA == NULL) && (nodeB != NULL) )
        {
            MergeNode(&nodeB, &currentNode);
        }
        else if( (nodeA != NULL) && (nodeB == NULL) )
        {
            MergeNode(&nodeA, &currentNode);
        }
        else
        {
            if(nodeA->data <= nodeB->data)
            {
                MergeNode(&nodeA, &currentNode);
            }
            else
            {
                MergeNode(&nodeB, &currentNode);
            }
        }
    }
    return head->next;
}

