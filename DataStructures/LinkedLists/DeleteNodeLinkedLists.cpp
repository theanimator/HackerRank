//
//  DeleteNodeLinkedLists.cpp
//  
//
//  Created by Laura Wieme on 12/10/16.
//  Solution for HackerRank
//
//

/*
 Delete Node at a given position in a linked list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Delete(Node *head, int position)
{
    // Complete this method
    Node *currentNode = head;
    if (position == 0)
    {
        head = head->next;
    }
    else
    {
        while(--position > 0)
        {
            currentNode = currentNode->next;
        }
        currentNode->next = currentNode->next->next;
    }
    return head;
}
