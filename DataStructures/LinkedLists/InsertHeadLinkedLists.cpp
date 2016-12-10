//
//  InsertHeadLinkedLists.cpp
//  
//
//  Created by Laura Wieme on 12/10/16.
//  Solution for HackerRank
//
//

/*
 Insert Node at the begining of a linked list
 Initially head pointer argument could be NULL for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 return back the pointer to the head of the linked list in the below method.
 */
Node* Insert(Node *head,int data)
{
    // Complete this method
    Node *insertedNode = new Node;
    insertedNode->data = data;
    insertedNode->next = head;
    head = insertedNode;
    return head;
}


