/*
  Prints all elements of the list starting from the head 
  to the standard output
  
  A node is represented by the following struct:
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    Node* currentNode = head;
    while(currentNode != NULL)
    {
        cout << currentNode->data << endl;
        currentNode = currentNode->next;
    }
}