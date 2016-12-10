//
//  InsertPositionLinkedLists.cpp
//  
//
//  Created by Laura Wieme on 12/10/16.
//  Solution for HackerRank
//
//

/*
 Insert Node at a given position in a linked list
 head can be NULL
 First element in the linked list is at position 0
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* InsertNth(Node *head, int data, int position)
{
    // Complete this method only
    // Do not write main function.
    Node *insertedNode = new Node;
    insertedNode->data = data;
    Node *currentNode = head;
    if (position == 0) {
        insertedNode-> next = head;
        head = insertedNode;
    }else {
        while (--position > 0)
        {
            currentNode = currentNode->next;
        }
        Node *next = currentNode->next;
        currentNode->next = insertedNode;
        insertedNode->next = next;
    }
    return head;
}
